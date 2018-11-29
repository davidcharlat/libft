#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int     get_next_line (const int fd, char **line);

int		main (void)
{
	int		fd;
	int		val;
	char	*line;

	fd = (const int)open( "./file" , O_RDONLY);
	val = get_next_line (fd, &line);
	if (strcmp ("ééééé1234567890", line))
	{
		free (line);
		return (1);
	}
	if (val != 1)
	{
		free (line);
		return (2);
	}
	val = get_next_line (fd, &line);
	if (strcmp ("", line))
	{
		free (line);
		return (3);
	}
	if (val != 1)
	{
		free (line);
		return (4);
	}
	val = get_next_line (fd, &line);
	if (strcmp ("any special char ¹~²#{}èçà$µ%ù$¤ ?", line))
	{
		free (line);
		return (5);
	}
	if (val != 1)
	{
		free (line);
		return (6);
	}
	val = get_next_line (fd, &line);
	if (strcmp ("what if the file ends with no feedline ?", line))
	{
		free (line);
		return (7);
	}
	if (val != 1)
	{
		free (line);
		return (8);
	}
	val = get_next_line (fd, &line);
	if (val)
	{
		return (9);
		free (line);
	}
	fd = (const int)open( "./file2" , O_RDONLY);
	val = get_next_line (fd, &line);
	if (strcmp ("", line))
	{
		free (line);
		return (10);
	}
	if (val != 1)
	{
		free (line);
		return (11);
	}
	val = get_next_line (fd, &line);
	if (strcmp ("", line))
	{
		free (line);
		return (12);
	}
	if (val != 1)
	{
		free (line);
		return (13);
	}
	val = get_next_line (fd, &line);
	if (val)
	{
		return (14);
		free (line);
	}
	free (line);
	printf ("get_next_line OK\n");
	return (0);	
}
