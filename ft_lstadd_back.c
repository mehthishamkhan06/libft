/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:23:15 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/24 12:23:22 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst == NULL)
		return ;
	if (*lst && lst)
	{
		temp = *lst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		return ;
	}
	else
		*lst = new;
}
// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*first;

// 	if (lst == NULL)
// 		return ;
// 	if (*lst && lst)
// 	{
// 		first = *lst;
// 		while (first->next)
// 			first = first->next;
// 		first->next = new;
// 		return ;
// 	}
// 	else
// 		*lst = new;
// }
// my function is the same but 