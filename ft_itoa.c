/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:22:56 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/24 12:23:01 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	digit_count(int nb)
{
	int	digit;

	if (nb == 0)
		return (1);
	digit = 0;
	if (nb < 0)
		digit++;
	while (nb != 0)
	{
		nb /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	int					d_cnt;
	char				*result;
	long int			nbr;

	nbr = n;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	d_cnt = digit_count(n);
	result = (char *)malloc(sizeof(char) * (d_cnt + 1));
	if (result == NULL)
		return (NULL);
	result[d_cnt] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		nbr = -n;
	}
	while (nbr)
	{
		result[--d_cnt] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (result);
}
// int main ()
// {
// 	printf("%s\n", ft_itoa(5322));
// 	printf("%s\n", ft_itoa(5322));
// 	printf("%s\n", ft_itoa(0));

// 	return(0);
// }
