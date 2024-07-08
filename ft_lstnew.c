/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:15:51 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/24 13:15:54 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

int main()
{
	t_list *l1;
	t_list *l2;
	t_list *l3;
	
	l1 = malloc(sizeof(t_list));
	if(!l1)
		return(NULL);
	l1 -> content = (void *)2;
	l1 -> next = NULL;

	l2 = ft_lstnew((void *)3);
	l3 = ft_lstnew((void *)4);

	printf("%i\n", (int)l1 -> content);
	ft_lstadd_back(&l1, l2);
	ft_lstadd_back(&l2, l3);
	printf("%i\n", (int)l1 -> next -> content);
	printf("%i", ft_lstsize(l1));
}
