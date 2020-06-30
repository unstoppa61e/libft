/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 17:04:52 by monoue            #+#    #+#             */
/*   Updated: 2020/06/30 11:58:21 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char *str, char c)
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

static size_t	set_start(size_t start, size_t end, char const *s, char c)
{
	start = end;
	while (start < ft_strlen(s) && s[start] == c)
		start++;
	return (start);
}

static size_t	set_end(size_t start, size_t end, char const *s, char c)
{
	end = start + 1;
	while (s[end] != '\0' && s[end] != c)
		end++;
	return (end);
}

void			free_all(char **arr, size_t i)
{
	while (i >= 0)
		free(arr[i--]);
	free(arr);
}

char			**ft_split(char const *s, char c)
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
		end = set_end(start, end, s, c);
		if (!(arr[i++] = ft_substr(s, start, end - start)))
		{
			free_all(arr, --i);
			return (NULL);
		}
		start = set_start(start, end, s, c);
	}
	arr[i] = NULL;
	return (arr);
}

// #include <stdio.h>
// int	main()
// {
// 	char	*arr = "axxbxxcccxxx";
// 	char	**arrs = ft_split(arr, 'x');
// 	int	i;
// 	i = 0;
// 	while (arrs[i])
// 		printf("%s\n", arrs[i++]);
// }
