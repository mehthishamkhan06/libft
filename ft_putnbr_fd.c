#include "libft.h"

void	putnbr(int nb, int fd)
{
	char a;

	if (nb >= 10)
	{
		putnbr(nb / 10, fd);
		a = nb % 10 + 48;
		write(fd, &a, 1);
	}
	else
	{
		a = nb + 48;
		write(fd, &a, 1);
	}
}

void	ft_putnbr(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if(nb < 0)
	{
		write(fd, "-", 1);
		putnbr(-1 * nb, fd);
	}
	else
		putnbr(nb, fd);
}

// int main()
// {
//     int fd;
//     fd = 1;
//     ft_putnbr(-646376, fd);
// }