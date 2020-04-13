/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 11:19:35 by amayer            #+#    #+#             */
/*   Updated: 2018/11/16 11:19:47 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	char *p1;
	char *p2;

	if (s1 && s2)
	{
		p1 = (char *)s1;
		p2 = (char *)s2;
		if (ft_strcmp(p1, p2) == 0)
			return (1);
		else
			return (0);
	}
	return (0);
}
