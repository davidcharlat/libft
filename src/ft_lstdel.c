#include "../includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next;
	
	if (!*alst)
		return;
	else
	next = (*alst)->next;
	del ((*alst)->content, (*alst)->content_size);
	free (*alst);
	*alst = NULL;
	ft_lstdel (&next, del);
}
