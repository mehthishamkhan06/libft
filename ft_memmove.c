#include "libft.h"


void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	int	diff;
	int length;
	unsigned char *a;
	unsigned char *b;

	diff = src - dest;
	length = len;
	i = 0;
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	if (dest == src)
		return (dest);
	if (diff < length && diff > 0)
		return (memcpy(dest, src, len));
	else
	{
		a = dest + len - 1;
		b = src + len - 1;
		while (len > 0)
		{
			a[len - 1] = b[len - 1];
			len--;
		}
		a++;
		b++;
	}
	return (a);
}