/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 11:27:09 by monoue            #+#    #+#             */
/*   Updated: 2020/10/15 18:08:13 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char	*d = dst;
	const char			*s = src;
	size_t				index;

	if (dst == src)
		return (dst);
	index = 0;
	while (index < n)
	{
		d[index] = s[index];
		if (s[index] == (char)c)
			return (&dst[index + 1]);
		index++;
	}
	return (NULL);
}
