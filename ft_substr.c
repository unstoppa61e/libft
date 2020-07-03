/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 13:48:12 by monoue            #+#    #+#             */
/*   Updated: 2020/07/03 15:32:44 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	slen;
	size_t	minlen;
	size_t	i;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start + len > slen || start > slen)
		return (ft_strdup(""));
	minlen = ft_max(ft_min(slen - start, len), 0);
	p = malloc((minlen + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);
	s += start;
	i = 0;
	while (minlen-- > 0)
		p[i++] = *s++;
	p[i] = '\0';
	return (p);
}
