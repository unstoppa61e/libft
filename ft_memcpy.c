/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 11:27:09 by monoue            #+#    #+#             */
/*   Updated: 2020/06/24 13:46:56 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*d;
	const char		*s;

	if (dst == src)
		return (dst);
	d = dst;
	s = src;
	while (n-- > 0)
		*d++ = *s++;
	return (dst);
}

// #include        <stdio.h>
// #include        <string.h>

// int main(void)
// {
//         char str1[128] = {1,1,1,1,1,1,1};
//         char str2[] = "ab\0cde";        /* 途中に空文字のある文字列 */
//         int i;

//         printf("コピー前　中身の確認\n");
//         for (i=0; i<7; i++)
//                 printf("%#x ",str1[i]);
//         printf("\n");

//         ft_memcpy(str1, str2, 5);

//         printf("コピー後　中身の確認\n");
//         for (i=0; i<7; i++)
//                 printf("%#x ",str1[i]);
//         printf("\n");

//         return 0;
// }