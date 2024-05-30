#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *a;

	i = 0;
	a = (unsigned char *)s;
	while(i < n)
	{
		if (a[i] == c)
		{
			return ((void *)&a[i]);	
		}
	i++;
	}
	return (NULL);
}


