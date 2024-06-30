/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:15:09 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/24 13:15:13 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new;

	temp = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new = malloc(sizeof(t_list));
		if (!new)
		{
			ft_lstclear(&temp, del);
			return (NULL);
		}
		new -> content = f(lst -> content);
		new -> next = NULL;
		ft_lstadd_back(&temp, new);
		lst = lst->next;
	}
	return (temp);
}
