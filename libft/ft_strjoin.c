/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 12:12:02 by amayer            #+#    #+#             */
/*   Updated: 2018/11/17 12:12:08 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*p1;
	char	*mix;

	if (s1 && s2)
	{
		p1 = (char *)s1;
		i = ft_strlen(p1);
		j = ft_strlen((char *)s2);
		if (!(mix = ft_strnew(i + j + 1)))
			return (0);
		i = -1;
		while (p1[++i])
			mix[i] = p1[i];
		j = 0;
		while (s2[j])
		{
			mix[i] = s2[j];
			i++;
			j++;
		}
		return (mix);
	}
	return (0);
}
