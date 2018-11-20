#include "../includes/libft.h"
#include <stdio.h>

int	main (void)
{
	t_list	*list;
	t_list	*bis;
	char	cont[] = "hello";
	char	next[] = "bye";
	char	nextnext[] = "azertyuiop";
	void	freel (void* ptr, size_t size)
	{
		char	*cpy;
		
		cpy = (char*)ptr;
		printf ("delone ");
		while (--size)
			cpy[size] = 0;
		free (ptr);
	}

	list = ft_lstnew (cont, 6);
	list->next = ft_lstnew (next, 4);
	list->next->next = ft_lstnew (nextnext, 11);
	bis = list->next;
	ft_lstdel (&bis, &freel);	
	if (strcmp (list->content, cont))
		return (1);
	freel (list->content, 3);
	free (list);
	return (0);
}
