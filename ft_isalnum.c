#include <unistd.h>
#include <stdio.h>

int ft_isalnum(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) && (str[i] >= '0' && str[i] <= '9'))
            return (1);
        i++;
    }
    return (0);
}

int main(void)
{
    printf("%i", ft_isalnum("434a4"));
    return (0);
}
#not working#