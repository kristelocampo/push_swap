/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 20:38:21 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/21 15:28:30 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long	smallest_num(t_numb *b)
{
	int	sm;

	sm = b->numb;
	while (b != NULL)
	{
		if (sm >= b->numb)
			sm = b->numb;
		b = b->next;
	}
	return (sm);
}

long	biggest_num(t_numb *a)
{
	int	big;

	big = a->numb;
	while (a != NULL)
	{
		if (big <= a->numb)
			big = a->numb;
		a = a->next;
	}
	return (big);
}	

int	min_num(t_numb *a, int min)
{
	min = a->numb;
	while (a != NULL)
	{
		if (min >= a->numb)
			min = a->numb;
		a = a->next;
	}
	return (min);
}

int	pos_num(t_numb *a, int pos, int sm)
{
	int	i;

	i = -1;
	while (a)
	{
		i++;
		if (sm == a->numb)
			pos = i;
		a = a->next;
	}
	return (pos);
}

int	push_find(t_numb **a, t_numb **b, int sm)
{
	swap_pb(a, b);
	ft_putstr("pb\n");
	if (*a)
		sm = min_num(*a, sm);
	return (sm);
}
