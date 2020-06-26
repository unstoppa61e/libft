/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:50:34 by monoue            #+#    #+#             */
/*   Updated: 2020/06/26 10:41:27 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	destlen;

	destlen = ft_strlen(dest);
	if (destsize > destlen)
		ft_strlcpy(dest + destlen, src, destsize - destlen);
	return (ft_strlen(src) + ft_min(destlen, destsize));
}
