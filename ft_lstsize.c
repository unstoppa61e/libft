/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 16:38:52 by monoue            #+#    #+#             */
/*   Updated: 2021/01/20 13:43:23 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int	count;

	if (lst == NULL || *lst == NULL)
		return (0);
	count = 1;
	while (lst->next)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
