/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:39:21 by monoue            #+#    #+#             */
/*   Updated: 2020/10/22 10:32:38 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int num)
{
	if (num == INT_MIN)
		return (ft_strdup(INT_MIN_STR));
	if (num < 0)
		return (ft_strjoin_free_both(ft_ctoa('-'), ft_itoa(-num)));
	if (num >= 10)
		return (ft_strjoin_free_both(ft_itoa(num / 10), ft_itoa(num % 10)));
	return (ft_ctoa((char)(num + '0')));
}
