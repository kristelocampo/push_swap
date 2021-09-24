/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 20:54:36 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/21 16:52:34 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s1, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*s2;

	s2 = NULL;
	if (s1 && f)
	{
		i = 0;
		len = ft_strlen((char *)s1);
		if (!(s2 == (char *)malloc(sizeof(char) * len + 1)))
			return (NULL);
		while (s1[i])
		{
			s2[i] = f(i, s1[i]);
			i++;
		}
		s2[i] = '\0';
		return (s2);
	}
	return (NULL);
}
