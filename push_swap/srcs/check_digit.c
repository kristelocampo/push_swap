/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:42:41 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/21 19:35:05 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	not_num(t_numb **a)
{
	ft_putstr("ERROR\n NOT A NUMBER\n");
	free_all(a);
	exit (1);
}

void	above_max(long long nbr, t_numb **a)
{
	long long int	i;

	i = 1;
	if (nbr > 2147483647)
	{
		ft_putstr("ERROR\n ABOVE MAXIMUM NUMBER\n");
		free_all(a);
		exit (1);
	}
	if (nbr < -2147483648)
	{
		ft_putstr("ERROR\n ABOVE MINIMUM NUMBER\n");
		free_all(a);
		exit (1);
	}
}

long long	digit_confirm(const char *str, t_numb **a)
{
	long long	i;
	long long	nbr;
	int			neg;

	nbr = 0;
	neg = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] >= '0') && str[i] <= '9')
	{
		nbr = (nbr * 10) + str[i] - '0';
		i++;
	}
	if (str[i] != '\0' && !(str[i] >= '0' && str[i] <= '9'))
		not_num(a);
	above_max(nbr * neg, a);
	return (nbr * neg);
}

void	check_dup(t_numb *head, int nbr, t_numb **a)
{
	int	i;

	i = 0;
	while (head)
	{
		if (head->numb == nbr)
			i++;
		head = head->next;
	}
	if (i >= 2)
	{
		ft_putstr("ERROR\nDUPILCATE NUMBER\n");
		free_all(a);
		exit(1);
	}
}
