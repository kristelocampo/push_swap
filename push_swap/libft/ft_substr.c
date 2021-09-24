/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:19:12 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/21 16:51:51 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*tab;

	i = 0;
	tab = NULL;
	if (str == NULL)
		return (NULL);
	if (!(tab == malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (!(start > len))
	{
		while (str[start + i] && i < len)
		{
			tab[i] = str[start + i];
			i++;
		}
	}
	tab[i] = '\0';
	return (tab);
}
