/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:44:08 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/21 15:28:10 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	first_check(t_numb *num)
{
	while (num)
	{
		if (num->next)
		{
			if (num->numb > num->next->numb)
				return (1);
		}
		num = num->next;
	}
	return (0);
}

int	final_check(t_numb *num, t_numb *b)
{
	if (b)
		return (1);
	if (!num)
		return (1);
	while (num)
	{
		if (num->next)
		{
			if (num->numb > num->next->numb)
				return (1);
		}
		num = num->next;
	}
	return (0);
}
