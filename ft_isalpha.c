#include <unistd.h>
#include <stdio.h>

int ft_isalpha(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    printf("%i", ft_isalpha("Hxkskoo"));
    return (0);
}