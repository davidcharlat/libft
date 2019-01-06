#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int     get_next_line_with_lenght (const int fd, char **line, int *lenght);

int		main (void)
{
	int		fd;
	int		fd2;
	int		val;
	char	*line;
	int		lenght;

	lenght = 0;
	fd = (const int)open( "./file" , O_RDONLY);
	val = get_next_line_with_lenght (fd, &line, &lenght);
	if (strcmp ("ééééé1234567890", line))
	{
		free (line);
		return (1);
	}
	if (lenght != 15 && lenght != 20)
	{
		free (line);
		return (2);
	}
	if (val != 1)
	{
		free (line);
		return (3);
	}
	val = get_next_line_with_lenght (fd, &line, &lenght);
	if (strcmp ("", line))
	{
		free (line);
		return (4);
	}
	if (lenght)
	{
		free (line);
		return (5);
	}
	if (val != 1)
	{
		free (line);
		return (6);
	}
	val = get_next_line_with_lenght (fd, &line, &lenght);
	if (strcmp ("any special char ¹~²#{}èçà$µ%ù$¤ ?", line))
	{
		free (line);
		return (7);
	}
	if (val != 1)
	{
		free (line);
		return (8);
	}
	val = get_next_line_with_lenght (fd, &line, &lenght);
	if (strcmp ("what if the file ends with no feedline ?", line))
	{
		free (line);
		return (9);
	}
	if (lenght != 40)
	{
		free (line);
		return (10);
	}
	if (val != 1)
	{
		free (line);
		return (11);
	}
	val = get_next_line_with_lenght (fd, &line, &lenght);
	if (val)
	{
		return (12);
		free (line);
	}
	fd = (const int)open( "./file2" , O_RDONLY);
	val = get_next_line_with_lenght (fd, &line, &lenght);
	if (strcmp ("", line))
	{
		free (line);
		return (13);
	}
	if (lenght)
	{
		free (line);
		return (14);
	}
	if (val != 1)
	{
		free (line);
		return (15);
	}
	val = get_next_line_with_lenght (fd, &line, &lenght);
	if (strcmp ("", line))
	{
		free (line);
		return (16);
	}
	if (lenght)
	{
		free (line);
		return (17);
	}
	if (val != 1)
	{
		free (line);
		return (18);
	}
	val = get_next_line_with_lenght (fd, &line, &lenght);
	if (val)
	{
		return (19);
		free (line);
	}
	printf ("get_next_line_with_lenght OK ");
	fd = (const int)open( "./file_a" , O_RDONLY);
	fd2 = (const int)open( "./file_b" , O_RDONLY);
	val = get_next_line_with_lenght (fd, &line, &lenght);
	if (strcmp ("line 1 of file a", line))
	{
		free (line);
		printf ("but can't deal with several fd:\n");
		return (0);
	}
	if (lenght != 16)
	{
		free (line);
		printf ("but can't deal with several fd:\n");
		return (0);
	}
	if (val != 1)
	{
		free (line);
		printf ("but can't deal with several fd:\n");
		return (0);
	}
	val = get_next_line_with_lenght (fd2, &line, &lenght);
	if (strcmp ("line 1 of file b", line))
	{
		free (line);
		printf ("but can't deal with several fd:\n");
		return (0);
	}
	if (lenght != 16)
	{
		free (line);
		printf ("but can't deal with several fd:\n");
		return (0);
	}
	if (val != 1)
	{
		free (line);
		printf ("but can't deal with several fd:\n");
		return (0);
	}
	val = get_next_line_with_lenght (fd, &line, &lenght);
	if (strcmp ("line 2 of file a", line))
	{
		free (line);
		printf ("but can't deal with several fd:\n");
		return (0);
	}
	if (lenght != 16)
	{
		free (line);
		printf ("but can't deal with several fd:\n");
		return (0);
	}
	if (val != 1)
	{
		free (line);
		printf ("but can't deal with several fd:\n");
		return (2);
	}
	val = get_next_line_with_lenght (fd2, &line, &lenght);
	if (strcmp ("line 2 of file b", line))
	{
		free (line);
		printf ("but can't deal with several fd:\n");
		return (0);
	}
	if (lenght != 16)
	{
		free (line);
		printf ("but can't deal with several fd:\n");
		return (0);
	}
	if (val != 1)
	{
		free (line);
		printf ("but can't deal with several fd:\n");
		return (0);
	}
	val = get_next_line_with_lenght (fd2, &line, &lenght);
	if (strcmp ("", line))
	{
		free (line);
		printf ("but can't deal with several fd:\n");
		return (0);
	}
	if (lenght != 0)
	{
		free (line);
		printf ("but can't deal with several fd:\n");
		return (0);
	}
	if (val != 1)
	{
		free (line);
		printf ("but can't deal with several fd:\n");
		return (0);
	}
	val = get_next_line_with_lenght (fd2, &line, &lenght);
	if (strcmp ("line 4 of file b", line))
	{
		free (line);
		printf ("but can't deal with several fd:\n");
		return (0);
	}
	if (lenght != 16)
	{
		free (line);
		printf ("but can't deal with several fd:\n");
		return (0);
	}
	if (val != 1)
	{
		free (line);
		printf ("but can't deal with several fd:\n");
		return (0);
	}
	val = get_next_line_with_lenght (fd2, &line, &lenght);
	if (val)
	{
		return (0);
		printf ("but can't deal with several fd:\n");
		free (line);
	}
	free (line);
	printf ("\n");
	return (0);	
}

