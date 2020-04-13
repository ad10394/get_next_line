/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:39:36 by amayer            #+#    #+#             */
/*   Updated: 2018/11/12 15:40:00 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s, const char *find)
{
	int		i;
	int		j;
	char	*p;
	char	*p2;

	p = (char *)s;
	p2 = (char *)find;
	if (ft_strcmp(p2, "") == 0)
		return (p);
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i + j] == find[j])
		{
			if (find[j + 1] == '\0')
				return (&p[i]);
			j++;
		}
		i++;
	}
	return (0);
}
