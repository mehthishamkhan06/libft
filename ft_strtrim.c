#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len;
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (s1 == '\0' || set == '\0')
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		count++;
		i++;
	}
	if (s1[i] == '\0')
		return (ft_strdup(""));
	len = ft_strlen(s1);
	while(ft_strchr(set, s1[len]))
		len--;
	str = (char *)ft_substr(s1, 0, len + 1);
	s1 -= count;
	return (str);
}