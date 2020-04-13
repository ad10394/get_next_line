/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 09:59:41 by amayer            #+#    #+#             */
/*   Updated: 2018/11/18 09:59:44 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *str, char c)
{
	int		i;
	int		j;
	int		on;
	char	*p;

	p = (char *)str;
	i = 0;
	j = 0;
	on = 0;
	while (p[i])
	{
		if (p[i] != c && !on)
		{
			j++;
			on = 1;
		}
		if (p[i] == c && on)
			on = 0;
		i++;
	}
	return (j);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**tab;

	if (!s)
		return (0);
	if (!(tab = (char **)malloc(sizeof(char *) * ft_count_word(s, c) + 1)))
		return (0);
	i = -1;
	j = -1;
	while (s[++i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			tab[++j] = ft_strsub(s, start, (i - start));
		}
		if (s[i] == '\0')
			break ;
	}
	tab[j + 1] = 0;
	return (tab);
}
