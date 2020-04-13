/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 12:42:36 by amayer            #+#    #+#             */
/*   Updated: 2018/11/17 12:42:38 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*str;

	if (s)
	{
		len = ft_strlen((char *)s);
		while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
			len--;
		i = -1;
		while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
			len--;
		if (len <= 0)
			len = 0;
		if (!(str = ft_strnew(len)))
			return (0);
		s += i;
		i = -1;
		while (++i < len)
			str[i] = *s++;
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
