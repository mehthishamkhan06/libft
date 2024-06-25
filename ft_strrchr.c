/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:25:10 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/24 13:25:12 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *temp;
	int	i;

	temp = (char *)s;
	i = ft_strlen(s);
	if (c == '\0')
		return (temp + i);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return (temp + i);
		i--;
	}
	return (NULL);
}

int main()
{
	char *a = "Hwllohowaeyou";
	char c = 'o';
	char *res = ft_strrchr(a, c);
	printf("%s\n", res);
}
