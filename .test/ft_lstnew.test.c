#include "../includes/libft.h"
#include <stdio.h>

int	main (void)
{
	t_list	*list;
	char	cont[] = "hello";

	list = ft_lstnew (cont, 6);
	if (strcmp (list->content, cont))
		return (1);
	if (list->next)
		return (2);
	if (list->content_size != 6)
		return (3);
	free (list->content);
	free (list);
	list = ft_lstnew (NULL, 6);
	if (list->content)
		return (4);
	if (list->next)
		return (5);
	if (list->content_size)
		return (6);
	printf ("ft_lstnew OK\n");
	return (0);
}
