/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 13:48:12 by monoue            #+#    #+#             */
/*   Updated: 2020/08/26 09:32:13 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *original_s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	srclen;
	size_t	minlen;
	size_t	sub_index;
	size_t	original_index;

	if (original_s == NULL)
		return (NULL);
	srclen = ft_strlen(original_s);
	if (start > srclen)
		return (ft_strdup(""));
	minlen = MIN(srclen - start, len);
	sub_s = malloc(sizeof(*sub_s) * (minlen + 1));
	if (sub_s == NULL)
		return (NULL);
	sub_index = 0;
	original_index = start;
	while (minlen > 0)
	{
		sub_s[sub_index++] = original_s[original_index++];
		minlen--;
	}
	sub_s[sub_index] = '\0';
	return (sub_s);
}
