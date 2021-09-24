/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:01:28 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/21 15:27:35 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_ra(t_numb **num)
{
	t_numb	*top;

	top = *num;
	if (*num == NULL)
		return ;
	while ((*num)->next != NULL)
		*num = (*num)->next;
	(*num)->next = top;
	top = top->next;
	*num = (*num)->next;
	(*num)->next = NULL;
	*num = top;
}

void	swap_rb(t_numb **num)
{
	t_numb	*top;

	top = *num;
	if (*num == NULL)
		return ;
	while ((*num)->next != NULL)
		*num = (*num)->next;
	(*num)->next = top;
	top = top->next;
	*num = (*num)->next;
	(*num)->next = NULL;
	*num = top;
}

void	swap_rr(t_numb **a, t_numb **b)
{
	swap_ra(a);
	swap_rb(b);
}
