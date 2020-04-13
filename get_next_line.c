/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 20:37:06 by amayer            #+#    #+#             */
/*   Updated: 2018/12/07 20:37:08 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strjoin_free(char *s1, char *s2, int n)
{
	int		i;
	int		j;
	char	*mix;

	if (!(s1 && s2))
		return (0);
	if (!(mix = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (0);
	i = -1;
	while (s1[++i])
		mix[i] = s1[i];
	j = 0;
	while (s2[j])
		mix[i++] = s2[j++];
	if (n == 0)
		free(s1);
	if (n == 1)
		free(s2);
	if (n == 2)
	{
		free(s1);
		free(s2);
	}
	return (mix);
}

static int	ft_treat_line(const int fd, char **line, char **str)
{
	int		i;
	char	*tmp;

	i = 0;
	while (str[fd][i] != '\n' && str[fd][i] != '\0')
		i++;
	if (str[fd][i] == '\n')
	{
		*line = ft_strsub(str[fd], 0, i);
		if (i < (int)ft_strlen(str[fd]))
		{
			tmp = ft_strsub(str[fd], (i + 1), ft_strlen(str[fd]));
			free(str[fd]);
			str[fd] = tmp;
		}
		else
			ft_strdel(&str[fd]);
	}
	else if (str[fd][i] == '\0')
	{
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char	*str[OPEN_MAX];
	char		buff[BUFF_SIZE + 1];
	int			ret;

	if (fd < 0 || line == NULL || read(fd, buff, 0) < 0 || fd >= OPEN_MAX)
		return (-1);
	if (str[fd] == NULL)
		if (!(str[fd] = ft_strnew(0)))
			return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		str[fd] = ft_strjoin_free(str[fd], buff, 0);
		if (ft_strchr(str[fd], '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (str[fd] == 0 || str[fd][0] == '\0'))
		return (0);
	return (ft_treat_line(fd, line, str));
}
