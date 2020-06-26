/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 13:48:12 by monoue            #+#    #+#             */
/*   Updated: 2020/06/26 15:51:27 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	minlen;
	size_t	i;

	minlen = ft_min(ft_strlen(s) - start, len);
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

// #include <stdio.h>
// int	main()
// {
// 	printf("%s\n", ft_substr("123", 20, 1));
// }

// // ft_substr("123", 20, 1) の時は空文字を出すように。テストケースに入っていないので注意。