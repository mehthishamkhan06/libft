#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;
	
	temp = *lst;
	if (*lst == NULL)
		*lst = new;
	while (temp -> next != NULL)
		temp = temp -> next;
	temp -> next = new;
}
