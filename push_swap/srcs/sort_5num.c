/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:15:45 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/22 19:15:36 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	step1(t_numb **a, t_numb **b, int i)
{
	i = 2;
	swap_pb(a, b);
	swap_pb(a, b);
	ft_putstr("pb\n");
	ft_putstr("pb\n");
	return (i);
}

int	sort_a(t_numb **a, t_numb **b)
{
	long	b_big;
	long	b_sm;
	int		b_pos_sm;
	int		i;

	i = 0;
	b_big = biggest_num(*b);
	b_sm = smallest_num(*b);
	b_pos_sm = b_smallest_pos(*b, b_sm);
	if ((*a)->numb < b_sm || (*a)->numb > b_big)
		i += a_step_count(b, b_pos_sm);
	return (i);
}

int	pos_a(t_numb **a, t_numb **b, int pos)
{
	int		i;
	t_numb	*tmp;

	i = 0;
	tmp = *a;
	if (*b)
	{
		if ((*b)->numb > biggest_num(*a) || (*b)->numb < smallest_num(*a))
			sort_a(b, a);
		else
		{
			while (tmp)
			{
				pos++;
				if (tmp->next != NULL)
				{
					if ((*b)->numb > tmp->numb && (*b)->numb < tmp->next->numb)
						return (pos);
				}
				tmp = tmp->next;
			}
		}
	}
	return (pos);
}

int	find_pos(t_numb *a, int sm)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (a)
	{
		if (sm == a->numb)
			pos = i;
		i++;
		a = a->next;
	}
	return (pos);
}

int	sort_5num(t_numb **a, t_numb **b, int i)
{
	int	pos;
	int	sm;

	pos = 0;
	sm = 0;
	i += step1(a, b, i);
	i += sort_3num(a);
	while (*b)
	{
		pos = 0;
		pos = pos_a(a, b, pos);
		i += a_step_count(a, pos);
		swap_pa(a, b);
		ft_putstr("pa\n");
	}
	sm = smallest_num(*a);
	pos = find_pos(*a, sm);
	i += a_step_count(a, pos);
	return (i);
}
