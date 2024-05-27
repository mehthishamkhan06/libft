#include <unistd.h>

void	ft_strclr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		str[i] = '\0';
	}
}