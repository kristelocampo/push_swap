/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:20:31 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/22 20:23:35 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_numb	*create_list(int argc, char **argv, t_numb **a)
{
	t_numb	*hold_head;
	t_numb	*head;
	t_numb	*tmp;
	int		i;

	i = 2;
	if (argv[1][0] == '-' && argv[1][1] == 'j')
		i = 3;
	head = malloc(sizeof(t_numb));
	hold_head = head;
	creat_list2(argv, a, head);
	while (i < argc)
	{
		tmp = malloc(sizeof(t_numb));
		tmp->numb = digit_confirm(argv[i], a);
		tmp->next = NULL;
		hold_head->next = tmp;
		hold_head = hold_head->next;
		check_dup(head, tmp->numb, a);
		i++;
	}
	return (head);
}

void	creat_list2(char **argv, t_numb **a, t_numb *head)
{
	if (argv[1][0] == '-' && argv[1][1] == 'j')
		head->numb = digit_confirm(argv[2], a);
	else
		head->numb = digit_confirm(argv[1], a);
	head->next = NULL;
}

void	print_list(t_numb *num)
{
	while (num != NULL)
	{
		ft_putnbr(num->numb);
		ft_putstr("\n");
		num = num->next;
	}
}
