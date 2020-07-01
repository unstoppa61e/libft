/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 17:36:51 by monoue            #+#    #+#             */
/*   Updated: 2020/07/01 18:13:27 by monoue           ###   ########.fr       */
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
		del(tmp1->content);
		free(tmp1);
		tmp1 = tmp2;
	}
	del(tmp1->content);
	free(tmp1);
	lst = NULL;
	free(lst);
}

// #include <stdio.h>

// void	delete(void *p)
// {
// 	p = NULL;
// }

// int	main()
// {
// 	t_list	*l;

// 	l = ft_lstnew(ft_strdup("abcde"));
// 	printf("%s\n", l->content);
// 	void (* pfunc)(void *);
// 	pfunc = delete;
// 	ft_lstdelone(l, pfunc);
// 	printf("%s\n", l->content);
// }