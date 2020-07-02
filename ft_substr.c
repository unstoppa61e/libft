/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 13:48:12 by monoue            #+#    #+#             */
/*   Updated: 2020/07/02 11:02:22 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	minlen;
	size_t	i;

	if (s == NULL)
		return (NULL);
	minlen = ft_max(ft_min(ft_strlen(s) - start, len), 0);
	p = malloc((minlen + 1) * sizeof *p);
	if (p == NULL)
		return (NULL);
	s += start;
	i = 0;
	while (minlen-- > 0)
		p[i++] = *s++;
	p[i] = '\0';
	return (p);
}

	// if (*s == '\0')
	// 	return (NULL);
	// if (start >= slen)
	// 	return (NULL);
// #include <stdio.h>
// int	main()
// {
// 	size_t	n;
// 	n = -1;
// 	printf("%zu\n", n);
// }

// ft_substr("123", 20, 1) の時は空文字を出すように。テストケースに入っていないので注意。