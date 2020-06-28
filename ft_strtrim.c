/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 16:09:52 by monoue            #+#    #+#             */
/*   Updated: 2020/06/28 16:24:07 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	int		len;
// 	int		i;
// 	char	*p;

// 	len = 0;
// 	i = 0;
// 	while (s1[i] == ' ' || s1[i] == '\n' || s1[i] == '\t')
// 		i++;
// 	while (s1[i] != '\0')
// 	{
// 		// if (ft_memchr())
// 		if (!ft_strchr(set, s1[i++]))
// 			len++;
// 	}
// 	printf("%d\n", len);
// 	p = malloc((len + 1) * sizeof *p);
// 	if (p == NULL)
// 		return (NULL);
// 	i = 0;
// 	// int	count;
// 	// count = 0;
// 	while (*s1 != '\0')
// 	{
// 		if (!ft_strchr(set, *s1))
// 			p[i++] = (unsigned char)*s1;
// 			// printf("%c", *s1);
// 		s1++;
// 	}
// 	// printf("%s\n", p);
// 	// printf("%d\n", count);
// 	return (p);
// }
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	s1len;

	s1len = ft_strlen(s1);
	count = 0;
	while (s1[count] && ft_strchr(set, s1[count]))
		count++;
	// while (ft_strchr(set, s1[count]) && s1[count])
	while (ft_strchr(set, s1[s1len - 1]) && s1len > count)
		s1len--;
	return (ft_substr((char *)s1, count, (s1len - count)));
}

// #include <string.h>
// #include <stdlib.h>
// int	main()
// {
// 	char	*str1 = "abcdefg";
// 	char	*c = "ag";
// 	printf("%s\n", ft_strtrim(str1, c));
// }