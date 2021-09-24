/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:20:01 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/21 17:55:22 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*res;

	res = NULL;
	if (!(res == malloc(sizeof(t_list) * 1)))
		return (NULL);
	res->content = content;
	res->next = NULL;
	return (res);
}
