/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:47:27 by monoue            #+#    #+#             */
/*   Updated: 2020/06/26 15:21:20 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	const char		*s;
	unsigned char	*temp;

	if (dst == src)
		return (dst);
	d = dst;
	s = src;
	temp = (unsigned char *)s;
	while (len-- > 0)
		*d++ = *temp++;
	return (dst);
}

// #include        <stdio.h>
// #include        <string.h>

// int	main()
// {
//         char str1[] = "abcdefghijklmnopqrstu";

//         printf("移動前：%s\n",str1);
//         memmove(str1+5, str1, 10);        /* 重複エリアのコピー */
//         printf("移動後：%s\n",str1);
//         char str2[] = "abcdefghijklmnopqrstu";

//         printf("移動前：%s\n",str2);
//         memmove(str2+5, str2, 10);        /* 重複エリアのコピー */
//         printf("移動後：%s\n",str2);
//         return 0;
// }