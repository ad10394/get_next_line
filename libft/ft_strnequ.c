/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 14:20:51 by amayer            #+#    #+#             */
/*   Updated: 2018/11/16 14:20:56 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char *p1;
	char *p2;

	if (s1 && s2)
	{
		p1 = (char *)s1;
		p2 = (char *)s2;
		if (ft_strncmp(p1, p2, n) == 0)
			return (1);
		else
			return (0);
	}
	return (0);
}
