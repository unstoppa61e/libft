/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 17:11:03 by monoue            #+#    #+#             */
/*   Updated: 2020/06/25 12:03:47 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == '\0')
		return ((char*)haystack);
	i = 0;
	while (*haystack != '\0' && i++ <= len - ft_strlen(needle))
	{
		if (*haystack == *needle)
		{
			const char	*n1;
			const char	*h1;

			n1 = needle;
			h1 = haystack;
			while (1)
			{
				if (*n1 == '\0')
					return ((char*)haystack);
				if (*n1++ != *h1++)
					break;
			}
		}
		haystack++;
	}
	return (NULL);
}

// char *ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	i;
// 	const char *n1;
// 	const char *h1;

// 	if (*needle == '\0')
// 		return ((char*)haystack);
// 	n1 = needle;
// 	h1 = haystack;
// 	i = 0;
// 	while (*h1 != '\0' && i++ <= len - ft_strlen(needle))
// 	{
// 		if (*h1 == *n1)
// 		{
// 			const char	*n1;
// 			const char	*h1;

// 			n1 = needle;
// 			h1 = h1;
// 			while (1)
// 			{
// 				if (*n1 == '\0')
// 					return ((char*)h1);
// 				if (*n1++ != *h1++)
// 					break;
// 			}
// 		}
// 		h1++;
// 	}
// 	return (NULL);
// }

// #include <string.h>
// #include <stdio.h>

// int	main()
// {
// 	char	*str1 = "abcdefgh";
// 	char	*str2 = "cde";
// 	printf("%s\n", strnstr(str1, str2, 4));
// 	printf("%s\n", ft_strnstr(str1, str2, 4));
// 	printf("%s\n", strnstr(str1, str2, 5));
// 	printf("%s\n", ft_strnstr(str1, str2, 5));
// 	printf("%s\n", strnstr(str1, str2, 6));
// 	printf("%s\n", ft_strnstr(str1, str2, 6));
// }