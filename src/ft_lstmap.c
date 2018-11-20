#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list*(*f)(t_list *elem))
{
	t_list	*temp;
	t_list	*newlst;
	t_list 	*cpy;
	
	temp = NULL;
	newlst = NULL;
	cpy = NULL;	
	if (lst)
	{
		temp = f(lst);
		newlst = ft_lstnew (temp->content, temp->content_size);
		cpy = newlst;
		lst = lst->next;
	}
	while (lst)
	{
		temp = f(lst);
		newlst->next = ft_lstnew (temp->content, temp->content_size);
		newlst = newlst->next;
		lst = lst->next;
	}
	return (cpy);
}
