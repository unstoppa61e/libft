/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 17:08:07 by monoue            #+#    #+#             */
/*   Updated: 2020/06/30 17:22:12 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	lst = lstlast(lst);
	lst->next = ft_lstnew(new);
	// ft_lstnew

	// lstlast(lst) = new;
	// lst = lstlast(lst);
}

#include <stdio.h>
int main()
{
	t_list	*l;

	l = lstnew(ft_strdup("1"));
	l->next = lstnew(ft_strdup("2"));
	l->next->next = lstnew(ft_strdup("3"));
}