/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:50:34 by monoue            #+#    #+#             */
/*   Updated: 2020/06/25 17:12:59 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	di;
	size_t	si;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	di = destlen;
	si = 0;
	while (src[si] != '\0' && di + 1 < size)
		dest[di++] = src[si++];
	dest[di] = '\0';
	return (srclen + ft_min(destlen, size));
}