/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 17:04:52 by monoue            #+#    #+#             */
/*   Updated: 2020/06/29 16:42:01 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char *str, char c)
{
	int	count;

	count = 0;
	while (*str != '\0' && *str == c)
		str++;
	while (*str != '\0')
	{
		while (*str != '\0' && *str != c)
			str++;
		count++;
		while (*str != '\0' && *str == c)
			str++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	count;
	size_t	start;
	size_t	end;
	size_t	i;

	count = ft_count_words((char *)s, c);
	if (!(arr = malloc((count + 1) * sizeof arr)))
		return (NULL);
	start = 0;
	while (s[start] != '\0' && s[start] == c)
		start++;
	i = 0;
	while (count-- > 0)
	{
		end = start + 1;
		while (s[end] != '\0' && s[end] != c)
			end++;
		arr[i++] = ft_substr(s, start, end - start);
		start = end;
		while (start < ft_strlen(s) && s[start] == c)
			start++;
	}
	arr[i] = NULL;
	return (arr);
}

// #include <stdio.h>
// int	main()
// {
	// printf("%d\n", 1);
	// printf("%d\n", ft_count_words("axxbxxcccxxx", 'x'));
	// char	*arr = "axxbxxcccxxx";
	// char	*sep = "cab";
// 	char	**arrs = ft_split(arr, 'x');
// 	int	i;
// 	i = 0;
// 	while (arrs[i])
// 		printf("%s\n", arrs[i++]);
// }
