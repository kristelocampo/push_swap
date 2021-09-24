/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:34:13 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/21 14:31:25 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ch)
{
	if ((ch < '0' || ch > '9') && (ch < 'A' || ch > 'Z')
		&& (ch < 'a' || ch > 'z'))
		return (0);
	return (1);
}
