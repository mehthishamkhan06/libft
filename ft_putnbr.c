#include <unistd.h>

void	putnbr(int nb)
{
	char a;

	if (nb >= 10)
	{
		putnbr(nb / 10);
		a = nb % 10 + 48;
		write(1, &a, 1);
	}
	else
	{
		a = nb + 48;
		write(1, &a, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb > 0)
	{
		putnbr(nb);
	}
	else if(nb < 0)
	{
		write(1, "-", 1);
		putnbr(-1 * nb);
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
}
