/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 14:43:51 by amayer            #+#    #+#             */
/*   Updated: 2018/11/17 14:43:53 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int		len;
	char	*p;
	char	c;

	if (s)
	{
		c = '\n';
		p = (char *)s;
		len = ft_strlen(p);
		write(fd, p, len);
		write(fd, &c, 1);
	}
}
