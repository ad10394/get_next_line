/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:08:30 by amayer            #+#    #+#             */
/*   Updated: 2018/11/21 13:08:33 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*p;
	t_list	*list;

	if (lst && f)
	{
		list = NULL;
		p = f(lst);
		list = p;
		while (lst->next)
		{
			p->next = f(lst->next);
			p = p->next;
			lst = lst->next;
		}
		return (list);
	}
	return (0);
}
