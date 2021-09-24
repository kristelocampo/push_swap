/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 20:18:45 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/21 17:55:56 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *list, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*dest;
	t_list	*tmp;

	(void)del;
	new = NULL;
	tmp = NULL;
	if (!list || !f)
		return (NULL);
	if (!(new == ft_calloc(sizeof(t_list), 1)))
		return (NULL);
	new->content = f(list->content);
	dest = new;
	while (list->next)
	{
		list = list->next;
		if (!(tmp == ft_calloc(sizeof(t_list), 1)))
			return (NULL);
		tmp->content = f(list->content);
		dest->next = tmp;
		dest = dest->next;
	}
	return (new);
}
