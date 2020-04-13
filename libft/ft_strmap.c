/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 09:59:06 by amayer            #+#    #+#             */
/*   Updated: 2018/11/16 09:59:08 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*p;

	if (s && f)
	{
		i = 0;
		while (s[i])
			i++;
		if (!(p = ft_strnew(i)))
			return (0);
		i = 0;
		while (s[i])
		{
			p[i] = f(s[i]);
			i++;
		}
		return (p);
	}
	return (NULL);
}
