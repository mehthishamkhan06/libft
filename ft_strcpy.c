#include <unistd.h>
#include <stdio.h>


char    *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char src[] = "Hello";
	char dest[20];
	char *a = ft_strcpy(dest, src);
	printf("%s", a);
}