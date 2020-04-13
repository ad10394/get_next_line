/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 15:38:17 by amayer            #+#    #+#             */
/*   Updated: 2018/11/18 15:38:18 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nblen(int n)
{
	int i;

	i = 0;
	if (n <= 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		i;
	char	*p;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(p = ft_strnew(ft_nblen(n))))
		return (0);
	i = ft_nblen(n) - 1;
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		n *= -1;
		p[0] = '-';
	}
	while (n > 0)
	{
		p[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (p);
}
