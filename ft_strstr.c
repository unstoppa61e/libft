/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 17:11:03 by monoue            #+#    #+#             */
/*   Updated: 2020/10/15 18:50:01 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const size_t	h_len = ft_strlen(haystack);
	const size_t	n_len = ft_strlen(needle);
	size_t			index;

	if (needle == NULL)
		return ((char *)haystack);
	if (haystack == NULL || n_len > h_len)
		return (NULL);
	index = 0;
	while (index + n_len <= h_len)
	{
		if (ft_strncmp(&haystack[index], needle, n_len))
			return ((char *)&haystack[index]);
		index++;
	}
	return (NULL);
}
