/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 16:09:52 by monoue            #+#    #+#             */
/*   Updated: 2020/06/26 16:39:09 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;
	char	*p;

	len = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		// if (ft_memchr())
		if (!ft_strchr(set, s1[i++]))
			len++;
	}
	p = malloc((len + 1) * sizeof *p);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
	{
		if (!ft_strchr(set, *s1))
			p[i++] = *s1;
		s1++;
	}
	return (p);
}

// int	main()
// {

// }