#include <unistd.h>
#include <stdlib.h>
#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *res;

	res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	if (res == NULL)
		return (NULL);
	res = ft_strcat(s1, s2);
	return (res);
}