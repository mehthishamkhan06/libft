#include "libft.h"



size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t d_len;
	size_t s_len;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (d_len > size)
		d_len = size;
	if (d_len == size)
		return (d_len + s_len);
	if (s_len < (size - d_len))
	{
		ft_memcpy((dest + d_len), src, s_len);
		dest[d_len + s_len] = '\0';
	}
	else
	{
		ft_memcpy(dest + d_len, src, size - d _len - 1);
		dest[size - 1] = '\0';
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