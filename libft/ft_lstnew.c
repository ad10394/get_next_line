/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 09:28:16 by amayer            #+#    #+#             */
/*   Updated: 2018/11/21 09:28:23 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	t_list	*list;
	void	*rcontent;

	list = 0;
	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (0);
	if (content == 0)
	{
		new->content = 0;
		new->content_size = 0;
		new->next = list;
	}
	else
	{
		if (!(rcontent = ft_memalloc(content_size)))
			return (0);
		ft_memcpy(rcontent, content, content_size);
		new->content = (void *)rcontent;
		new->content_size = content_size;
		new->next = list;
	}
	return (new);
}
