/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:47:27 by monoue            #+#    #+#             */
/*   Updated: 2020/10/15 16:17:10 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	const char		*s;
	size_t			index;

	if (src >= dst)
		ft_memcpy(dst, src, len);
	else
	{
		index = 0;
		d = &dst[len - 1];
		s = &src[len - 1];
		while (index < len)
		{
			d[index] = s[index];
			index--;
		}
	}
	return (dst);
}
