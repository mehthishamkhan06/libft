/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:24:24 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/24 13:24:28 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (s[i] == '\0')
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>

// // Prototype declaration for ft_strmap1 function
// char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

// // Example transformation function: Converts lowercase letters to uppercase
// char to_uppercase(unsigned int index, char c)
// {
//     if (c >= 'a' && c <= 'z')
//     {
//         // Convert lowercase letter to uppercase
//         return c - 32;
//     }
//     else
//     {
//         // Return unchanged for non-lowercase letters
//         return c;
//     }
// }

// int main()
// {
//     char input[] = "Hello, World!";
//     char *result;

//     // Test ft_strmap1 with the to_uppercase function
//     result = ft_strmapi(input, to_uppercase);

//     if (result)
//     {
//         printf("Original string: %s\n", input);
//         printf("Transformed string: %s\n", result);

//         // Remember to free the memory allocated by ft_strmap1
//         free(result);
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }
