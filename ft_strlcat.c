/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:50:34 by monoue            #+#    #+#             */
/*   Updated: 2020/06/24 15:21:56 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	char		*d;
	const char	*s;

	if (dstsize == 0 || ft_strlen(dst) + ft_strlen(src) > dstsize)
		return (ft_strlen(dst) + ft_strlen(src));
	d = dst;
	s = src;
	while (*dst != '\0')
		dst++;
	while (dstsize-- > 1 && *s != '\0')
		*d++ = *s++;
	if (ft_strlen(dst) + ft_strlen(src) < dstsize)
		*d = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>

// int	main()
// {

// }