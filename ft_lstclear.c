/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:12:52 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/24 13:12:55 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*successor;
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	temp = *lst;
	while (temp)
	{
		successor = temp->next;
		ft_lstdelone(temp, del);
		temp = successor;
	}
	*lst = NULL;
}
