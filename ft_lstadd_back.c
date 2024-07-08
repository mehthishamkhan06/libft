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

// int main()
// {
// 	t_list *last;
// 	t_list *lsst;
// 	t_list *front;
// 	int a;
// 	int b;
// 	int c;
// 	int *x;
// 	int *y;
// 	int *z;
// 	a = 10;
// 	b = 12;
// 	c = 14;
// 	x = &a;
// 	y = &b;
// 	z = &c;
// 	last = (t_list *)malloc(sizeof(t_list));
// 	lsst = (t_list *)malloc(sizeof(t_list));
// 	front = (t_list *)malloc(sizeof(t_list));
// 	last->content = (void*)x;
// 	lsst->content = (void*)y;
// 	last->next = lsst;
// 	lsst->next = NULL;
// 	front->content = (void*)z;
// 	front->next = NULL;
// 	printf("%d\n", *(int *)ft_lstlast(last)->content);
// 	ft_lstadd_back(&last, front);
// 	int i = 0;
// 	while (i < 3)
// 	{
// 		printf("%d\n", *(int *)ft_lstlast(last)->content);
// 		i++;
// 	}
// }