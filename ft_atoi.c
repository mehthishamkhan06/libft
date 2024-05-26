#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int answer;
    int sign;

    answer = 0;
    sign = 0;
    i = 0;
    while(str[i] >= 9 && str[i] <= 13 || str[i] == 32)
        i++;
    if (str[i] == '-' || str[i] == '+')	
	{    
        if (str[i] == '-')
        {
			sign++;
		}
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		answer *= 10;
		answer += str[i] - 48;
		i++;
	}
	if (sign == 1)
		return (-answer);
	else
		return (answer);
}

int main(void)
{
	printf("%i", ft_atoi("   -27247h"));
}