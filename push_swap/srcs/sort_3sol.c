/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3sol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:31:13 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/21 15:25:56 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	sort_3num(t_numb **a)
{
	int	f;
	int	s;
	int	t;
	int	i;

	f = (*a)->numb;
	s = (*a)->next->numb;
	t = (*a)->next->next->numb;
	i = 0;
	if (f > s && s < t && t > f)
		i += case1(a);
	else if (f > s && s > t && t < f)
		i += case2(a);
	else if (f > s && s < t && t < f)
		i += case3(a);
	else if (f < s && s > t && t > f)
		i += case4(a);
	else if (f < s && s > t && t < f)
		i += case5(a);
	else if (first_check(*a) == 0)
		return (i);
	return (0);
}
