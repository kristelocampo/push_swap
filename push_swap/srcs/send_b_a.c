/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_b_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:52:21 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/22 20:52:31 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	push_rrb_pa(t_numb **a, t_numb **b, int pos, int total)
{
	int	i;
	int	biggest;

	i = 0;
	biggest = biggest_num(*b);
	while (total > pos)
	{
		swap_rrb(b);
		ft_putstr("rrb\n");
		pos++;
		i++;
	}
	if ((*b)->numb == biggest)
	{
		swap_pa(a, b);
		ft_putstr("pa\n");
	}
	return (i);
}

int	push_rb_pa(t_numb **a, t_numb **b, int pos, int i)
{
	while (pos > 0)
	{
		swap_rb(b);
		ft_putstr("rb\n");
		pos--;
		i++;
	}
	if (pos == 0)
	{
		swap_pa(a, b);
		ft_putstr("pa\n");
		i++;
	}
	return (i);
}

int	rb_rrb_last_step(t_numb **a, t_numb **b, int total)
{
	int	biggest;
	int	pos;
	int	half;
	int	i;

	i = 0;
	while (*b)
	{
		total = total_value(*b);
		half = total / 2;
		pos = 0;
		biggest = biggest_num(*b);
		pos = pos_num(*b, pos, biggest);
		if (pos <= half)
			i += push_rb_pa(a, b, pos, i);
		if (pos > half)
			i += push_rrb_pa(a, b, pos, total);
	}
	return (i);
}
