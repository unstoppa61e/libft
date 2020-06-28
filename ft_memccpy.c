/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 11:27:09 by monoue            #+#    #+#             */
/*   Updated: 2020/06/28 09:48:18 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char	*d;
	const char		*s;
	size_t			i;

	if (dst == src)
		return (dst);
	d = dst;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// char *msg = "This is the string: not copied";

// int main() {

//     char buffer[80];
// 	char	*pdest;
//     // memset( buffer, '\0', 80 );
//     pdest = ft_memccpy( buffer, msg, ':', 80 );
// 	*pdest = '\0';
//     printf( "%s\n", buffer );
//   }