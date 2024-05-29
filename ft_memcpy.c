#include <libft.h>
#include <unistd.h>

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	size_t	i;
	unsigned char	*p;
	unsigned char	*q;

	p = (unsigned char *)s1;
	q = (unsigned char *)s2;
	i = 0;
	if (s1 == s2)
		return (s1);
	while (i < n)
	{
		p[i] = q[i];
		i++;
	}
	return (s1);
}