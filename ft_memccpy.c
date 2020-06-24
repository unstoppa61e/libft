/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 11:27:09 by monoue            #+#    #+#             */
/*   Updated: 2020/06/24 13:51:32 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char	*d;
	const char		*s;

	d = dst;
	s = src;
	while (n-- > 0)
	{
		*d++ = *s;
		if (*s == c)
			break;
		s++;
	}
	return (dst);
}

// void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
// {
// 	unsigned char	*d;
// 	const char		*s;

// 	if (dst == src)
// 		return (dst);
// 	d = dst;
// 	s = src;
// 	while (n-- > 0)
// 		*d++ = *s++;
// 	return (dst);
// }


#include <stdio.h>
#include <string.h>

char *msg = "This is the string: not copied";

int main() {

    char buffer[80];
	char	*pdest;
    // memset( buffer, '\0', 80 );
    pdest = ft_memccpy( buffer, msg, ':', 80 );
	*pdest = '\0';
    printf( "%s\n", buffer );
  }