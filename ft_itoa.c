#include "libft.h"

static	int digit_count(int nb)
{
	int digit;

	if (nb == 0)
		return (1);
	digit = 0;
	while(nb != 0)
	{
		nb /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	int		d_cnt;
	char	*result;
	unsigned int nbr;
	char	*a;

	if (n == 0)
		a = ft_strdup("0");
		return (a);
	if (n == -2147483648)
		a = ft_strdup("-2147483648");
		return (a);
	d_cnt = digit_count(n);
	if (n < 0)
		d_cnt++;
	result = (char *)malloc(sizeof(char) * (d_cnt + 1));
	if (result == NULL)
		return (NULL);
	result[d_cnt] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		nbr = -n;
	}
	else
		nbr = n;
	while(nbr)
	{
		result[d_cnt - 1] = nbr % 10 + '0';
		nbr /= 10;
		d_cnt--;
	}
	return (result);
}

// int main ()
// {
// 	printf("%s\n", ft_itoa(0));
// 	return(0);
// }