/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:50:07 by amayer            #+#    #+#             */
/*   Updated: 2018/11/12 12:50:09 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len;
	char	*p;

	p = (char *)src;
	len = ft_strlen(p);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		if (i > len)
			dest[i] = '\0';
		i++;
	}
	return (dest);
}
