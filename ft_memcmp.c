/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 13:49:50 by monoue            #+#    #+#             */
/*   Updated: 2020/10/15 17:50:42 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1 = (unsigned char *)s1;
	const unsigned char	*p2 = (unsigned char *)s2;
	size_t				index;

	index = 0;
	while (index < n && p1[index] == p2[index])
		index++;
	if (index == n)
		return (0);
	return ((int)(p1[index] - p2[index]));
}
