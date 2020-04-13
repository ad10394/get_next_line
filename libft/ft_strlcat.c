/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:21:50 by amayer            #+#    #+#             */
/*   Updated: 2018/11/14 12:21:52 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int		i;
	int		j;
	int		k;
	char	*p;

	p = (char *)src;
	i = 0;
	i = ft_strlen(dest);
	j = 0;
	k = i;
	while (p[j] != '\0' && (i + j) < (int)size - 1)
	{
		dest[k] = p[j];
		k++;
		j++;
	}
	dest[k] = '\0';
	j = 0;
	j = ft_strlen(p);
	if ((int)size == 0)
		return (j);
	if (i > (int)size)
		return (j + size);
	return (i + j);
}
