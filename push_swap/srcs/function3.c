/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:01:31 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/21 17:56:14 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_rra(t_numb **num)
{
	t_numb	*first;
	t_numb	*bottom;
	t_numb	*top;

	first = *num;
	bottom = *num;
	top = *num;
	if (*num == NULL)
		return ;
	while (top->next != NULL)
	{
		top = top->next;
		if (top->next != NULL)
			bottom = bottom->next;
	}
	if (top->next == NULL)
	{
		top->next = first;
		bottom->next = NULL;
	}
	*num = top;
}

void	swap_rrb(t_numb **num)
{
	t_numb	*first;
	t_numb	*top;
	t_numb	*bottom;

	first = *num;
	top = *num;
	bottom = *num;
	if (*num == NULL)
		return ;
	while (top->next != NULL)
	{
		top = top->next;
		if (top->next != NULL)
			bottom = bottom->next;
	}
	if (top->next == NULL)
	{
		top->next = first;
		bottom->next = NULL;
	}
	*num = top;
}

void	swap_rrr(t_numb **a, t_numb **b)
{
	swap_rra(a);
	swap_rrb(b);
}
