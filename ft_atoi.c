/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 16:06:06 by monoue            #+#    #+#             */
/*   Updated: 2020/06/23 16:58:18 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{

	if (c == ' ' || c == '\t' || c == '\v' || c == '\f' || c == '\r' \
	|| c == '\n')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long int	n;
	int			sign;

	while (ft_isspace(*str))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	n = 0;
	while (*str != '\0')
	{
		if (ft_isspace(*str))
		{
			while (ft_isspace(*str))
				str++;
			if (*str != '\0')
				return (0);
			break;
		}
		if (*str < '0' || *str > '9')
			return (0);
		n *= 10;
		n += (*str - '0');
		str++;
	}
	// if (n < -2147483648 || n > 2147483647)
	// 	return (0);
	return (n * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>

// int	main()
// {
// 	printf("%d\n", ft_atoi("999999999999"));
// 	printf("%d\n", atoi("999999999999"));
// }