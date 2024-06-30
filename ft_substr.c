/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:23:28 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/24 13:23:34 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	size_t	newlen;
	size_t	i;
	char	*res;

	i = 0;
	if (!s)
		return (0);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	str_len = str_len - start;
	if (str_len < len)
		newlen = str_len;
	else
		newlen = len;
	res = (char *)malloc(sizeof(char) * (newlen + 1));
	if (res == NULL)
		return (NULL);
	while (i < newlen && s[start])
		res[i++] = s[start++];
	res[i++] = '\0';
	return (res);
}

// int main()
// {
// 	printf("%s\n", ft_substr("Heello", 2, 4));
// }
