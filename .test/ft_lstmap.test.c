#include "../includes/libft.h"
#include <stdio.h>

int	main (void)
{
	t_list	*list;
	t_list	*ret;
	char	cont[] = "->\nr";
	char	next[] = "ft_lstmapr";
	char	nextnext[] = "OK\nr";
	t_list	*f (t_list *ptr)
	{
		if (ptr && ptr->content_size)
		{
			(ptr->content_size)--;
			((char*)(ptr->content))[ptr->content_size - 1] = 0;
		}
		return (ptr);
	}
	void	freel (void* ptr, size_t size)
	{
		char	*cpy;
		
		cpy = (char*)ptr;
		while (--size)
			cpy[size] = 0;
		free (ptr);
	}
	ret = NULL;
	list = ft_lstnew (cont, 5);
	list->next = ft_lstnew (next, 11);
	list->next->next = ft_lstnew (nextnext, 5);	
	ret = ft_lstmap (NULL, &f);
	ret = ft_lstmap (list, &f);	
	freel (list->next->next->content, 4);
	free (list->next->next);
	freel (list->next->content, 10);
	free (list->next);
	freel (list->content, 4);
	free (list);
	if (strcmp ((char*)(ret->content), "->\n"))
		return (1);
	if (strcmp ((char*)(ret->next->content), "ft_lstmap"))
		return (2);
	if (strcmp ((char*)(ret->next->next->content), "OK\n"))
		return (3);
	if (ret->next->next->next)
		return (4);
	freel (ret->next->next->content, 3);
	free (ret->next->next);
	freel (ret->next->content, 9);
	free (ret->next);
	freel (ret->content, 3);
	free (ret);
	printf ("ft_lstmap OK\n");
	return (0);
}
