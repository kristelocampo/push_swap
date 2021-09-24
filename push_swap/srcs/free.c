/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:29:11 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/21 19:31:27 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_all(t_numb **all)
{
	t_numb	*tmp;

	while (*all)
	{
		tmp = *all;
		tmp->numb = 0;
		(*all) = (*all)->next;
		free(tmp);
	}
}

void	free_a_b(t_numb **a, t_numb **b)
{
	free_all(a);
	free_all(b);
}
