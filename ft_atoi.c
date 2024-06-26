/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:13:21 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/24 12:13:33 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <limits.h>

int	ft_atoi(const char *str)
{
	int	answer;
	int	sign;

	answer = 0;
	sign = 1;
	if (!str)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		answer *= 10;
		answer += *str - 48;
		while (answer >=  )
		str++;
	}
	return (sign * answer)
}

int main(void)
{
	printf("%i\n", ft_atoi("645826548725"));
	printf("%i\n", atoi("+0"));
}
