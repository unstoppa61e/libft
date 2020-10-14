/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:50:34 by monoue            #+#    #+#             */
/*   Updated: 2020/10/14 16:33:06 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const unsigned char	uc = (unsigned char)c;
	const size_t		s_len = ft_strlen(s);
	size_t				index;

	index = 0;
	while (index < s_len)
	{
		if (s[s_len - (index + 1)] == uc)
			return ((char *)&s[s_len - (index + 1)]);
		index++;
	}
	return (NULL);
}
