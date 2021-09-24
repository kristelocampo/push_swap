/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:42:13 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/23 16:39:11 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	pos_function(t_numb *a, int local_max)
{
	int	pos;
	int	i;

	pos = 0;
	i = -1;
	while (a)
	{
		i++;
		if (a->numb <= local_max)
			return (i);
		a = a->next;
	}
	return (i);
}

int	b_before_push(t_numb **a, t_numb **b)
{
	int	i;
	int	pos;

	i = 0;
	pos = b_pos(a, b);
	i += b_step_count(b, pos);
	i += push_pb(a, b);
	return (i);
}

int	a_handle_range(t_numb **a, t_numb **b, int pos, int chunk)
{
	int	local_max;
	int	t;
	int	i;
	int	p;

	t = total_value(*a);
	local_max = t / 5;
	i = 0;
	p = 0;
	while (range(*a, chunk) == 1)
	{
		pos = pos_function(*a, local_max);
		if ((*a) && !((*a)->numb <= chunk))
			i += a_step_count(a, pos);
		if ((*a) && (*a)->numb <= chunk)
		{
			if (b_total(*b) == 1 || (!*b))
				i += b_one_empty(a, b);
		}
		if (b_total(*b) > 1 && (*a) && (*a)->numb <= chunk)
			i += b_sort(a, b);
		if (b_total(*b) > 1 && (*a) && (*a)->numb <= chunk)
			i += b_before_push(a, b);
	}
	return (i);
}

int	one_hundred(t_numb **a, t_numb **b, int i)
{
	int	local_max;
	int	total_chunk;
	int	pos;
	int	t;
	int	j;

	j = 0;
	t = total_value(*a);
	while (*a)
	{
		j++;
		local_max = t / 5;
		total_chunk = local_max * j;
		pos = pos_function(*a, local_max);
		if (range(*a, total_chunk) == 1)
			i += a_handle_range(a, b, pos, total_chunk);
	}
	if (!*a)
		i += rb_rrb_last_step(a, b, t);
	return (i);
}
