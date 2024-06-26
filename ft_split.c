/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:20:31 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/24 13:20:36 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	count(char const *s, char c)
// {
// 	int	i;
// 	int	l;

// 	i = 0;
// 	l = 0;
// 	while (s[i])
// 	{
// 		if (i == 0 && s[i] != c)
// 			l++;
// 		if (s[i] == c && s[i + 1] != c && s[i + 1])
// 			l++;
// 		i++;
// 	}
// 	return (l);
// }
static int	w_count(const char *str, char c)
{
	int	i;
	int	not_seen;
	int	count;

	count = 0;
	not_seen = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			if (not_seen == 1)
			{
				not_seen = 0;
				count++;
			}
		}
		else
			not_seen = 1;
		i++;
	}
	return (count);
}

char	**splitter(char const *s, char c, char **str, int *i)
{
	int	word_length;
	int	count_since_start;
	int	inside_string_count;

	word_length = 0;
	count_since_start = 0;
	while (i[0] < i[4])
	{
		word_length = 0;
		while (s[count_since_start] == c && s[count_since_start])
			count_since_start++;
		while (s[count_since_start] != c && s[count_since_start])
		{
			word_length++;
			count_since_start++;
		}
		str[i[0]] = (char *)malloc(sizeof(char) * (word_length + 1));
		count_since_start -= word_length;
		inside_string_count = 0;
		while (s[count_since_start] != c && s[count_since_start])
			str[i[0]][inside_string_count++] = s[count_since_start++];
		str[i[0]++][inside_string_count] = '\0';
	}
	str[i[0]] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i[5];
	int		j;

	j = 0;
	while (j < 5)
		i[j++] = 0;
	if (!s)
		return (NULL);
	i[4] = w_count(s, c);
	str = (char **) malloc(sizeof(*str) * (i[4] + 1));
	if (!str)
		return (NULL);
	return (splitter(s, c, str, i));
}

// int		main(void)
// {
// 	int i = 0;
// 	char **tab;		
// 	tab = ft_split("--bonjour--je--m'appel--Arthur---", '-');
// 	while (i < 4)
// 	{
// 		printf("string %d : %s\n", i, tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
