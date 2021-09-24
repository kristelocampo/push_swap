/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:01:24 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/21 15:10:14 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_sa(t_numb **numb)
{
	t_numb	*tmp;

	if (*numb == NULL)
		return ;
	tmp = *numb;
	*numb = (*numb)->next;
	tmp->next = (*numb)->next;
	(*numb)->next = tmp;
}

void	swap_sb(t_numb **numb)
{
	t_numb	*tmp;

	if (*numb == NULL)
		return ;
	tmp = *numb;
	*numb = (*numb)->next;
	tmp->next = (*numb)->next;
	(*numb)->next = tmp;
}

void	swap_ss(t_numb **a, t_numb **b)
{
	swap_sa(a);
	swap_sb(b);
}
