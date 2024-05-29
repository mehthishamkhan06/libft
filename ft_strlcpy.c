#include <libft.h>
#include <unistd.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t counter;

	i = 0;
	counter = 0;
	while(src[counter])
	{
		counter++;
	}
	if (size == 0)
		return counter;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (counter);
}