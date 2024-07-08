/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:12:01 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/24 13:12:39 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

// void del(void *content)
// {
// 	free(content);
// }
// int main()
// {
// 	t_list *full;
// 	char *s;
// 	s = malloc(sizeof(char) * 8);
// 	s[0] = 'h';
// 	s[1] = 'i';
// 	s[2] = '\0';
// 	full = (t_list *)malloc(sizeof(t_list));
// 	full->content = (char *)s;
// 	printf("%s\n", (char *)full->content);
// 	ft_lstdelone(full, del);
// 	printf("%s", (char *)full->content);
// }