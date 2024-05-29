#include <string.h>

char *ft_strrchr(const char *s, int c)
{
	int i;

	i = strlen(s);
	while(i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h> // For strlen, which your implementation uses

// int main() {
//     const char *str = "Hello, Worldo!";
//     char ch = 'o';
//     char *result = ft_strrchr(str, ch);

//     if (result != NULL) {
//         printf("Last occurrence of character '%c' found at position: %ld\n", ch, result - str);
//     } else {
//         printf("Character '%c' not found.\n", ch);
//     }

//     return 0;
// }