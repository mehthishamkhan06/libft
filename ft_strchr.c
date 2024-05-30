#include "libft.h"


char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] && c != s[i])
		i++;
	if (c == s[i])
		return ((char *)&s[i]);
	return (NULL);
}

int main() {
    const char *str = "Hello, World!";
    char ch = 'l';
    char *result = ft_strchr(str, ch);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    } else {
        printf("Character '%c' not found.\n", ch);
    }

    return 0;
}
