/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_ra_rra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:59:10 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/23 14:39:17 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ra_count(t_numb **a, int pos)
{
	int	i;
	int	t;

	i = pos;
	t = b_total(*a);
	while (pos != 0)
	{
		swap_ra(a);
		ft_putstr("ra\n");
		pos--;
	}
	return (i);
}

int	rra_count(t_numb **a, int pos)
{
	int	i;
	int	t;

	t = b_total(*a);
	pos = t - pos;
	i = pos;
	while (pos != 0)
	{
		swap_rra(a);
		ft_putstr("rra\n");
		pos--;
	}
	return (i);
}

int	a_step_count(t_numb **a, int pos)
{
	int	t;
	int	i;

	t = 0;
	t = total_value(*a);
	i = 0;
	if (pos < t / 2)
		i += ra_count(a, pos);
	if (pos >= t / 2)
		i += rra_count(a, pos);
	return (i);
}

int	ra_rra_count2(t_numb **a, int num, int i)
{
	while (num > 0)
	{
		swap_rra(a);
		ft_putstr("rra\n");
		num--;
		i++;
	}
	return (i);
}

int	ra_rra_count(t_numb **a, int total, int pos)
{
	int	i;
	int	half;
	int	num;

	i = 0;
	half = total / 2;
	num = total - pos;
	if (pos <= half)
	{
		while (pos > 0)
		{
			swap_ra(a);
			ft_putstr("ra\n");
			pos--;
			i++;
		}
	}
	if (pos > half)
		i += ra_rra_count2(a, num, i);
	return (i);
}
