/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:50:34 by monoue            #+#    #+#             */
/*   Updated: 2020/06/24 16:56:42 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	minlen;

	minlen = ft_min(n, ft_min(ft_strlen(s1), ft_strlen(s2)));
	while (minlen-- > 0 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	printf("%d\n", strncmp("abcde", "abez", 5));
// 	printf("%d\n", ft_strncmp("abcde", "abez", 5));
// 	// printf("%d\n", ft_strncmp("abcde", "abez", 5));
// }