/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_functions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 20:50:58 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/22 20:13:30 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	b_smallest_pos(t_numb *b, int b_sm)
{
	int	pos;

	pos = 0;
	while (b)
	{
		if (b->numb == b_sm)
			return (pos);
		b = b->next;
		pos++;
	}
	return (pos);
}

int	b_total(t_numb *b)
{
	int	i;

	i = 0;
	while (b)
	{
		i++;
		b = b->next;
	}
	return (i);
}

int	b_one_empty(t_numb **a, t_numb **b)
{
	int	i;

	i = 0;
	i += push_pb(a, b);
	return (i);
}

int	b_small_pos(t_numb *b, int b_small)
{
	int	pos;

	pos = 0;
	while (b)
	{
		if (b->numb == b_small)
			return (pos);
		b = b->next;
		pos++;
	}
	return (pos);
}

int	b_sort(t_numb **a, t_numb **b)
{
	long	b_big;
	long	b_small;
	int		b_pos_sm;
	int		i;

	i = 0;
	b_big = biggest_num(*b);
	b_small = smallest_num(*b);
	b_pos_sm = b_small_pos(*b, b_small);
	if ((*a)->numb < b_small || (*a)->numb > b_big)
	{
		i += b_step_count(b, b_pos_sm);
		i += push_pb(a, b);
	}
	return (i);
}
