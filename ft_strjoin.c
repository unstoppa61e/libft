/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 16:01:19 by monoue            #+#    #+#             */
/*   Updated: 2020/08/20 10:31:09 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_index;
	int		s2_index;
	char	*joined_str;

	if (s1 == NULL)
		return ((char *)s2);
	if (s2 == NULL)
		return ((char *)s1);
	joined_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joined_str)
		return (NULL);
	s1_index = 0;
	while (s1 && s1[s1_index])
	{
		joined_str[s1_index] = s1[s1_index];
		s1_index++;
	}
	s2_index = 0;
	while (s2 && s2[s2_index])
	{
		joined_str[s1_index + s2_index] = s2[s2_index];
		s2_index++;
	}
	joined_str[s1_index + s2_index] = '\0';
	return (joined_str);
}
