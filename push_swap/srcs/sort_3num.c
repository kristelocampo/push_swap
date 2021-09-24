/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:11:26 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/21 15:25:38 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	case1(t_numb **a)
{
	int	i;

	i = 1;
	swap_sa(a);
	ft_putstr("sa\n");
	return (i);
}

int	case2(t_numb **a)
{
	int	i;

	i = 2;
	swap_sa(a);
	swap_rra(a);
	ft_putstr("sa\n");
	ft_putstr("rra\n");
	return (i);
}

int	case3(t_numb **a)
{
	int	i;

	i = 1;
	swap_ra(a);
	ft_putstr("ra\n");
	return (i);
}

int	case4(t_numb **a)
{
	int	i;

	i = 2;
	swap_sa(a);
	swap_ra(a);
	ft_putstr("sa\n");
	ft_putstr("ra\n");
	return (i);
}

int	case5(t_numb **a)
{
	int	i;

	i = 1;
	swap_rra(a);
	ft_putstr("rra\n");
	return (i);
}
