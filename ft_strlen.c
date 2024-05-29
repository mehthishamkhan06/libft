#include <unistd.h>
#include <stdio.h>

size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}

int main(void)
{
    printf("%li", ft_strlen("HELLO"));
}