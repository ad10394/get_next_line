/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 12:14:45 by amayer            #+#    #+#             */
/*   Updated: 2018/11/11 12:14:51 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int			i;
	int			j;
	char		*ptr1;

	ptr1 = dest;
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		ptr1[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
