#include "libft.h"



size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = 0;
	s_len = 0;
	i = 0;
	while(dest[d_len] && d_len < size - 1)
		d_len++;
	while(src[s_len])
		s_len++;
	if (size == 0)
		return (s_len + d_len);
	while(src[i] && ((d_len + i) < size - 1))
	{
		dest[d_len + i] = src[i];
		i++;
	}
	if(d_len + i < size - 1)
	{
		dest[d_len + i] = '\0';
		// i++;
	}
	return (d_len + s_len);
}

// int main() {
//     char dest[20] = "Hello";
//     char src[] = "World";
//     size_t size = 0;

//     size_t result = ft_strlcat(dest, src, size);

//     printf("Destination: %s\n", dest);       // Output: "Hello"
//     printf("Total length: %zu\n", result);  // Output: 11

//     return 0;
// }