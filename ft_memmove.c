/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:18:26 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/24 13:18:29 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	if (dest == src)
		return (dest);
	if (a < b)
		return (ft_memcpy(dest, src, n));
	else
	{
		while (n > 0)
		{
			n--;
			a[n] = b[n];
		}
	}
	return (dest);
}

// void    *ft_memmove(void *dest, const void *src, size_t n)
// {
//     unsigned char   *a;
//     unsigned char   *b;
//     size_t             sub;
//     size_t             len;

//     sub = (unsigned char *)src - (unsigned char *)dest;
//     len = (int)n;
//     if (dest == src)
//         return (dest);
//     if (sub < len && sub > 0)
//         return (ft_memcpy(dest, src, n));
//     else
//     {
//         a = (unsigned char *)dest + len - 1;
//         b = (unsigned char *)src + len - 1;
//         while(n)
//         {
//             *a-- = *b--;
//             n--;
//         }
//         a++;
//         b++;
//     }
//     return (dest);
// }
