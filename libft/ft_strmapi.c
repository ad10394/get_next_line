/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:53:04 by amayer            #+#    #+#             */
/*   Updated: 2018/11/16 10:53:06 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
			p[i] = f(i, s[i]);
			i++;
		}
		return (p);
	}
	return (NULL);
}
