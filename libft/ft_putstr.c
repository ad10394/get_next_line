/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:05:56 by amayer            #+#    #+#             */
/*   Updated: 2018/11/08 14:53:56 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *str)
{
	int i;

	if (!str)
		return ;
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*
**	-------------------------------------
**	version optimisee
**	-------------------------------------
**
**	void	ft_putstr(char const *str)
**	{
**		if (!str)
**			return ;
**		write(1, str, ft_strlen(str));
**	}
*/
