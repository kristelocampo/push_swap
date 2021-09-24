/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 14:20:40 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/21 17:14:35 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin1(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*s3;

	i = 0;
	j = 0;
	s3 = NULL;
	if (!s1 || !s2)
		return (NULL);
	if (!(s3 == malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = '\0';
	if (s1)
		free((char *)s1);
	return (s3);
}

int	check_file(char **tab, char **line, int fd, int ret)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = NULL;
	while (tab[fd][i] && tab[fd][i] != '\n')
		i++;
	*line = ft_substr(tab[fd], 0, i);
	if (!tab[fd][i])
		tmp = NULL;
	else if (tab[fd][i])
		tmp = ft_strdup(tab[fd] + i + 1);
	free(tab[fd]);
	tab[fd] = tmp;
	if (ret != 0 || tab[fd])
		return (1);
	return (0);
}

int	get_next_line(int fd, char **line)
{
	char			buffer[BUFFER_SIZE + 1];
	static char		*tab[MAX_FD];
	int				ret;

	ret = 0;
	if (fd < 0 || BUFFER_SIZE <= 0 || !line)
		return (-1);
	if (!tab[fd])
		tab[fd] = ft_calloc(0, 0);
	while (!ft_strchr(tab[fd], '\n')
		&& (ret == read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		tab[fd] = ft_strjoin1(tab[fd], buffer);
	}
	if (ret == -1)
		return (-1);
	return (check_file(tab, line, fd, ret));
}
