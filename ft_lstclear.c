#include "libft.h"

void	ft_lstclear(t_list *lst, void (*del)(void*))
{
	t_list successor;
	t_list temp;

	if (lst == NULL || del == NULL)
		return ;
	temp = *lst;
	while(temp)
	{
		successor = temp->next;
		ft_lstdelone(temp, del);
		temp = successor; 
	}
	*lst = NULL;
}