/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 16:01:19 by monoue            #+#    #+#             */
/*   Updated: 2021/01/20 13:53:34 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	const size_t	s1_len = ft_strlen(s1);
	const size_t	s2_len = ft_strlen(s2);
	char			*joined_s;

	if (!s1 || !s2)
		return (NULL);
	joined_s = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!joined_s)
		return (NULL);
	ft_strcpy(joined_s, s1);
	ft_strcpy(&joined_s[s1_len], s2);
	return (joined_s);
}
