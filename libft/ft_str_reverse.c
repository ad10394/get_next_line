/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 10:23:30 by amayer            #+#    #+#             */
/*   Updated: 2018/11/30 10:23:34 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_reverse(char *s)
{
	int		i;
	int		j;
	int		len;
	char	tmp;

	if (!(s && *s))
		return (0);
	len = ft_strlen(s);
	i = 0;
	j = len - 1;
	while (i < (len / 2))
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
	return (s);
}
