#include "libft.h"

void	ft_lstiter(t_list *lst, void(*f)(void *))
{
	t_list *temp;

	temp = *lst;
	if (lst == NULL || f == NULL)
		return ;
	while(temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}