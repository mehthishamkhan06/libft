#include <unistd.h>
#include <stdlib.h>
#include <libft.h>

char	*ft_strtrim(char const *s)
{
	char	*res;
	int		i;

	i = 0;
	while(s[i] && s[i] >= 9 && s[i] <= 13 || s[i] == 32)
	{
		i++;
	}
	s[i] = '\0';
	return (s);
}