/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tobinary.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 11:26:55 by amayer            #+#    #+#             */
/*   Updated: 2018/11/30 11:26:56 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_bin(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 2;
		i++;
	}
	return (i);
}

static char	*ft_binary_neg(int n)
{
	int		i;
	int		len;
	char	*p;

	if (n == -2147483648)
		return (strdup("10000000000000000000000000000000"));
	len = ft_count_bin(n);
	if (!(p = ft_strnew(len)))
		return (0);
	n *= -1;
	i = 0;
	while (n > 0)
	{
		p[i] = *(ft_itoa(n % 2));
		n = n / 2;
		i++;
	}
	p[len - 1] = '1';
	return (p);
}

char		*ft_tobinary(int n)
{
	int		i;
	int		len;
	char	*p;

	if (n == 0)
		return (strdup("0"));
	if (n == 2147483647)
		return (strdup("01111111111111111111111111111111"));
	if (n < 0)
		return (ft_binary_neg(n));
	len = ft_count_bin(n);
	if (!(p = ft_strnew(len)))
		return (0);
	i = 0;
	while (n > 0)
	{
		p[i] = *(ft_itoa(n % 2));
		n = n / 2;
		i++;
	}
	p = ft_str_reverse(p);
	return (p);
}
