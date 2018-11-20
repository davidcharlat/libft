#include "../includes/libft.h"
#include <stdio.h>

int	main (void)
{
	t_list	*list;
	t_list	*bis;
	char	cont[] = "hello";
	char	next[] = "bye";
	void	freel (void* ptr, size_t size)
	{
		char	*cpy;
		
		cpy = (char*)ptr;
		while (--size)
			cpy[size] = 0;
		free (ptr);
	}

	list = ft_lstnew (cont, 6);
	list->next = ft_lstnew (next, 4);
	bis = list->next;
	ft_lstdelone (&list, &freel);	
	if (strcmp (bis->content, next))
		return (1);
	freel (bis->content, 3);
	free (bis);
	printf ("ft_lstdelone OK\n");
	return (0);
}
