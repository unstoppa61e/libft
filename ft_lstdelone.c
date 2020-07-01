/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 16:06:58 by monoue            #+#    #+#             */
/*   Updated: 2020/07/01 17:35:01 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
		del(lst->content);
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