/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:22:49 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/24 13:22:51 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (d_len > size)
		d_len = size;
	if (d_len == size)
		return (d_len + s_len);
	if (s_len < (size - d_len))
	{
		ft_memcpy((dest + d_len), src, s_len);
		dest[d_len + s_len] = '\0';
	}
	else
	{
		ft_memcpy((dest + d_len), src, (size - d_len - 1));
		dest[size - 1] = '\0';
	}
	return (d_len + s_len);
}
