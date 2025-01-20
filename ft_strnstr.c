/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:24:54 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/24 13:24:56 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && i + j < len)
			{
				j++;
				if (to_find[j] == '\0')
					return ((char *)str + i);
			}
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	printf("%s", ft_strnstr("Hello", "el", 10));
// }
