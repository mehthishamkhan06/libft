#include <libft.h>
#include <unistd.h>

void	bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		(unsigned char *)s[i] = 0;
		i++;
	}
}