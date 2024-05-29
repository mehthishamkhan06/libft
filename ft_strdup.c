#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i;
    i = 0;
    char *res;
    while(src[i])
        i++;
    res = malloc(sizeof(char) * (i + 1));
    if (res == NULL)
    	return (NULL);
	i = 0;
    while(src[i])
    {  
        res[i] = src[i];
		i++;
    }
	res[i] = '\0';
	return (res);
}

int main(void)
{
	printf("%s", ft_strdup("HELLO"));
}