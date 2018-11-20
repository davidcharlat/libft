#include "../includes/libft.h"
#include <stdio.h>

int	main (void)
{
	t_list	*list;
	char	cont[] = "->\n";
	char	next[] = "ft_lstiter";
	char	nextnext[] = " OK";
	void	f (t_list *ptr)
	{
		printf("%s", (char*)ptr->content);
	}
	void	freel (void* ptr, size_t size)
	{
		char	*cpy;
		
		cpy = (char*)ptr;
		while (--size)
			cpy[size] = 0;
		free (ptr);
	}

	list = ft_lstnew (cont, 4);
	list->next = ft_lstnew (next, 11);
	list->next->next = ft_lstnew (nextnext, 4);	
	ft_lstiter (list, &f);
	ft_lstiter (NULL, &f);
	freel (list->next->next->content, 3);
	free (list->next->next);
	freel (list->next->content, 10);
	free (list->next);
	freel (list->content, 3);
	free (list);
	return (0);
}
