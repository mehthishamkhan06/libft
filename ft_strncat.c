#include <unistd.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unisigned int n)
{
    int i;
    unisigned int j;
    j = 0;
    i = 0;
    while(dest[i])
        i++;
    while(src[j] && j < n)
    {
        dest[i + j] = src[j];
        j++;
    }
    while (j < n)
    {
        dest[i + j] = '\0';
        j++;
    }
    return (dest);
}