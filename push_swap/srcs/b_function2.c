/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_function2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:25:37 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/23 20:36:07 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	b_rb_count(t_numb **b, int pos)
{
	int	i;
	int	t;

	i = pos;
	t = b_total(*b);
	while (pos != 0)
	{
		swap_rb(b);
		ft_putstr("rb\n");
		pos--;
	}
	return (i);
}

int	b_rrb_count(t_numb **b, int pos)
{
	int	i;
	int	t;

	t = b_total(*b);
	pos = t - pos;
	i = pos;
	if (pos > 0)
	{
		while (pos != 0)
		{
			swap_rrb(b);
			ft_putstr("rrb\n");
			pos--;
		}
	}
	return (i);
}

int	b_pos(t_numb **a, t_numb **b)
{
	t_numb	*tmp;
	int		pos;
	int		i;

	i = 0;
	pos = 0;
	tmp = *b;
	if (a)
	{
		while (tmp)
		{
			pos++;
			if (tmp->next != NULL)
			{
				if ((*a)->numb > tmp->numb && (*a)->numb < tmp->next->numb)
					return (pos);
			}
			tmp = tmp->next;
		}
	}
	return (pos);
}

int	b_step_count(t_numb **b, int pos)
{
	int	t;
	int	i;

	t = 0;
	t = total_value(*b);
	i = 0;
	if (pos < t / 2)
		i += b_rb_count(b, pos);
	if (pos > t / 2)
		i += b_rrb_count(b, pos);
	return (i);
}
