/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:03:58 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/23 14:42:38 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	total_value(t_numb *a)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a)
			i++;
		a = a->next;
	}
	return (i);
}

int	push_pb(t_numb **a, t_numb **b)
{
	int	i;

	i = 0;
	swap_pb(a, b);
	ft_putstr("pb\n");
	i++;
	return (i);
}

int	range(t_numb *a, int local_max)
{
	while (a)
	{
		if (a->numb <= local_max)
			return (1);
		a = a->next;
	}
	return (0);
}

int	final_sort(t_numb **a, t_numb **b, int i)
{
	int	sm;
	int	t;
	int	pos;

	while (*a)
	{
		sm = min_num(*a, sm);
		t = total_value(*a);
		pos = pos_num(*a, pos, sm);
		if (sm == (*a)->numb)
		{
			sm = push_find(a, b, sm);
			t = total_value(*a);
			pos = pos_num(*a, pos, sm);
			i++;
		}
		if (*a)
			i += ra_rra_count(a, t, pos);
		if (final_check(*a, *b) == 0)
			return (i);
		if (*a)
			i += push_pb(a, b);
	}
	return (i);
}
