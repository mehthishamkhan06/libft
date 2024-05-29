#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *res;
	int i;
	int j;

	i = 0;
	j = 0;

	res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	if (res == NULL)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		res[i] = s2[j];
		j++; 
	}
	res[i] = '\0';
	return (res);
}


// int main(void)
// {
// 	printf("%s", ft_strjoin("hello", "world"));
// }