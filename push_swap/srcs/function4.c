/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:01:34 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/21 15:14:04 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_pa(t_numb **a, t_numb **b)
{
	t_numb	*top_b;

	if (*b == NULL)
		return ;
	top_b = (*b)->next;
	(*b)->next = *a;
	*a = *b;
	*b = top_b;
}

void	swap_pb(t_numb **a, t_numb **b)
{
	t_numb	*top_a;

	if (*a == NULL)
		return ;
	top_a = (*a)->next;
	(*a)->next = *b;
	*b = *a;
	*a = top_a;
}
