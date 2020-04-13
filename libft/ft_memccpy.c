/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:24:02 by amayer            #+#    #+#             */
/*   Updated: 2018/11/11 14:24:04 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	size_t	i;
	char	*p1;
	char	*p2;

	p1 = (char *)dest;
	p2 = (char *)src;
	i = 0;
	while (i < len)
	{
		p1[i] = p2[i];
		if (p2[i] == (char)c)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
