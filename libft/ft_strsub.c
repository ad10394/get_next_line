/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 07:39:49 by amayer            #+#    #+#             */
/*   Updated: 2018/11/17 07:39:54 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;
	char	*sub;

	if (s)
	{
		p = (char *)s;
		if (!(sub = ft_strnew(len)))
			return (0);
		i = 0;
		while (i < start)
			i++;
		j = 0;
		while (j < len && p[i] != '\0')
		{
			sub[j] = p[i];
			i++;
			j++;
		}
		return (sub);
	}
	return (0);
}
