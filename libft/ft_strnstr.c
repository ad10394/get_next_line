/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 13:04:16 by amayer            #+#    #+#             */
/*   Updated: 2018/11/14 13:04:18 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t	i;
	int		j;
	char	*p;

	p = (char *)s;
	i = 0;
	while (find[i])
		i++;
	if (i == 0)
		return (p);
	i = 0;
	while (s[i] != '\0' && i < len)
	{
		j = 0;
		while (s[i + j] == find[j] && ((i + j) < len))
		{
			if (find[j + 1] == '\0')
				return (&p[i]);
			j++;
		}
		i++;
	}
	return (0);
}
