#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *temp;
	t_list *new;

	temp = NULL;
	while(lst)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&temp, del);
		}
		ft_lstadd_back(&temp, new);
		lst = lst->next;
	}
	return(temp);
}