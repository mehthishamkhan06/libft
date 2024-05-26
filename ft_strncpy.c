#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

	i = 0;
    while(src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main(void)
{
	char src[] = "Hello";
	char dest[7];
	char *a;
	a = ft_strncpy(dest, src, 4);
	printf("%s", a);
}