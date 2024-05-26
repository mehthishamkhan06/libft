#include <unistd.h>
#include <stdio.h>

int ft_isdigit(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
    printf("%i", ft_isdigit("4344"));
    return (0);
}