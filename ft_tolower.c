#include "libft.h"

int	ft_islower(int c)
{
	if (c > 64 && c < 91)
		return (c += 32);
	return (c);
}