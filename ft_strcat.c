#include <unistd.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;
    j = 0;
    i = 0;
    while(dest[i])
        i++;
    while(src[j])
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}