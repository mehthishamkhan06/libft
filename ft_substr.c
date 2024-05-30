#include "libft.h"


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *res;
	size_t star;

	star = start;
	i = 0;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	while(i < len && s[i])
	{
		res[i] = s[star];
		i++;
		star++;
	}
	res[i] = '\0';
	return (res);
}

// #include <stdio.h>

// int main() {
//     // Test string
//     const char *str = "This is a test string";
    
//     // Define start index and length for the substring
//     unsigned int start = 5;
//     size_t len = 8;
    
//     // Call ft_substr function to get the substring
//     char *substr = ft_substr(str, start, len);
    
//     if (substr != NULL) {
//         // Print the substring
//         printf("Substring: %s\n", substr);
        
//         // Free the memory allocated for the substring
//         free(substr);
//     } else {
//         printf("Substring is NULL. Memory allocation failed.\n");
//     }
    
//     return 0;
// }
