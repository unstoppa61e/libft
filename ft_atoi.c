/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 16:06:06 by monoue            #+#    #+#             */
/*   Updated: 2020/06/25 16:37:20 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	negative_or_positive(int n)
{
	if (n)
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	long int	n;
	int			sign;
	int			count;

	while (ft_isspace(*str))
		str++;
	sign = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = 1;
		str++;
	}
	n = 0;
	count = 0;
	while (*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += (*str++ - '0');
		count++;
	}
	if (count > 10)
		return (sign - 1);
	return (negative_or_positive(sign) * n);
}