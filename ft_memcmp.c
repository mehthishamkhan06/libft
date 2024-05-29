#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t  i;
	unsigned char *a;
	unsigned char *b;

	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (i < n)
	{
		if (a[i] != b[i])
		{
			return (a[i] - b[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h> // For the standard memcmp function for comparison

// int main() {
//     char str1[] = "Hello, World!";
//     char str2[] = "Hello, World!";
//     char str3[] = "Hello, world!";

//     int result1 = ft_memcmp(str1, str3, sizeof(str1));
//     int result2 = memcmp(str1, str3, sizeof(str1));

//     printf("Comparison result1: %d\n", result1); // Output: 0 (strings are equal)
//     printf("Comparison result2: %d\n", result2); // Output: non-zero (strings are different)

//     return 0;
// }
