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

// int main(void)
// {
// 	t_list *node1 = ft_lstnew(ft_strdup("bruh"));
// 	t_list *node2 = ft_lstnew(ft_strdup("zxda"));
// 	t_list *node3 = ft_lstnew(ft_strdup("qweqwe"));

// 	ft_lstadd_front(&node1, node2);
// 	ft_lstadd_front(&node1, node3);

// 	ft_lstclear(&node2, free);
// 	while(node1)
// 	{
// 		printf("%s\n", node1->content);
// 		node1 = node1->next;
// 	}
// 
// int main(int ac, char **av)
// {
// 	t_list	list;
// 	t_list	tmp = ;

// 	ft_lstadd_front(&list,  	);
// 	list.content = (int)7;
// 	list.next = list.next->next;
// 	list.content = (int)8;
// 	list.next->next = list.next->next->next;
// 	list.content = (int)9;
// 	list.next = NULL;

// }