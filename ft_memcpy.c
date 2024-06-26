/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:18:12 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/24 13:18:15 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*q;

	p = (unsigned char *)dest;
	q = (unsigned char *)src;
	i = 0;
	if (dest == src)
		return (dest);
	while (i < n)
	{
		p[i] = q[i];
		i++;
	}
	return (dest);
}
