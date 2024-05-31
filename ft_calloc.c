#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *res;

	if (size == SIZE_MAX && count > 1)
		return (NULL);
	res = (void *)malloc(size * (count + 1));
	if (res == NULL)
		return (NULL);
	ft_bzero(res, count * size);
	return (res);
}