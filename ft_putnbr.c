/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 16:23:14 by monoue            #+#    #+#             */
/*   Updated: 2020/10/15 15:06:54 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long	num;
	long	digit;

	num = (long)n;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	digit = 1;
	while (digit * 10 <= num)
		digit *= 10;
	while (digit)
	{
		ft_putchar(ITOC(num / digit));
		num %= digit;
		digit /= 10;
	}
}
