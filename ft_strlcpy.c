/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:23:10 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/24 13:23:12 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcpy(char *dest, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	counter;

// 	i = 0;
// 	counter = 0;
// 	while (src[counter])
// 	{
// 		counter++;
// 	}
// 	if (size == 0)
// 		return (counter);
// 	while (src[i] && i < (size - 1))
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (counter);
// }
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
		counter++;
	}
	dest[i] = '\0';
	// src -= counter;
	// dest -= counter;
	return (ft_strlen(src));
}

int main()
{
	char src[20] = "HEyyLLO";
	char dest[20] = "JOKhhER";
	printf("%ld\n", ft_strlcpy(dest, src, 5));
}