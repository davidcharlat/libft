#include "../includes/libft.h"
#include <stdio.h>

int	main (void)
{
	t_list	*list;
	t_list	*nul;
	char	cont[] = "hello";
	char	next[] = "bye";
	char	nextnext[] = "azertyuiop";
	void	freel (void* ptr, size_t size)
	{
		char	*cpy;
		
		cpy = (char*)ptr;
		while (--size)
			cpy[size] = 0;
		free (ptr);
	}

	nul = NULL;
	list = ft_lstnew (cont, 6);
	list->next = ft_lstnew (next, 4);
	ft_lstadd (&list, ft_lstnew (nextnext, 11));	
	if (strcmp (list->content, nextnext))
		return (1);
	if (strcmp (list->next->content, cont))
		return (2);
	if (strcmp (list->next->next->content, next))
		return (3);
	if (list->next->next->next)
		return (4);
	freel (list->next->next->content, 3);
	free (list->next->next);
	freel (list->next->content, 5);
	free (list->next);
	freel (list->content, 10);
	free (list);
	ft_lstadd (&nul, ft_lstnew (nextnext, 11));
	if (strcmp (nul->content, nextnext))
		return (5);
	if (nul->next)
		return (6);
	freel (nul->content, 10);
	free (nul);
	printf ("ft_lstadd OK\n");
	return (0);
}
