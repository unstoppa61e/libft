/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 17:36:51 by monoue            #+#    #+#             */
/*   Updated: 2020/07/02 16:58:04 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *lst;
	while (tmp1->next)
	{
		tmp2 = tmp1->next;
		// ft_lstdelone(tmp1, del);
		del(tmp1->content);
		free(tmp1);
		tmp1 = tmp2;
	}
	// ft_lstdelone(tmp1, del);
	del(tmp1->content);
	free(tmp1);
	lst = NULL;
	free(lst);
}
