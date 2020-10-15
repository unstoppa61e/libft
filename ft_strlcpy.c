/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:50:34 by monoue            #+#    #+#             */
/*   Updated: 2020/10/15 17:57:09 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const size_t	srclen = ft_strlen(src);
	const size_t	dststr_len = MIN(dstsize - 1, srclen);
	size_t			index;

	if (dst == NULL || src == NULL)
		return (0);
	if (dstsize == 0)
		return (srclen);
	index = 0;
	while (index < dststr_len)
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (srclen);
}
