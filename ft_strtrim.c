/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:25:28 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/24 13:25:30 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
		i++;
	}
	if (*s1 == '\0')
		return (ft_strdup(""));
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len]))
		len--;
	str = (char *)ft_substr(s1, 0, len + 1);
	s1 -= i;
	return (str);
}

// int main()
// {
// 	char *str = "---HELLO---";
// 	char *ans;
// 	ans = ft_strtrim(str, "---");
// 	printf("%s", ans);
// }
