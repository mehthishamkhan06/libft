/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:21:45 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/24 13:21:50 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	if ((char)c == '\0')
		return (str + ft_strlen(s));
	while (s[i] && (char)c != s[i])
		i++;
	if ((char)c == s[i])
		return (str + i);
	return (NULL);
}

// int main()
// {
// 	char *a = "Hwllohowaeyou";
// 	char c = 'o';
// 	char *res = ft_strchr(a, c);
// 	printf("%s\n", res);
// }
