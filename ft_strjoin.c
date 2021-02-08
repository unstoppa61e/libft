/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 16:01:19 by monoue            #+#    #+#             */
/*   Updated: 2021/02/08 10:24:25 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	const size_t	s1_len = ft_strlen(s1);
	const size_t	s2_len = ft_strlen(s2);
	char			*ret_s;

	if (!s1 || !s2)
		return (NULL);
	ret_s = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!ret_s)
		return (NULL);
	ft_strcpy(ret_s, s1);
	ft_strcpy(&ret_s[s1_len], s2);
	return (ret_s);
}
