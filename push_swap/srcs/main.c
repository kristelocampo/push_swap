/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:43:57 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/23 20:07:24 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	three_five(t_numb **a, t_numb **b, int ret, int argc)
{
	int	i;

	i = 0;
	if (argc == 4 && ret == 0)
		i += sort_3num(a);
	if (argc == 6 && ret == 0)
		i += sort_5num(a, b, i);
	if (argc == 5 && ret == 1)
		i += sort_3num(a);
	if (argc == 7 && ret == 1)
		i += sort_5num(a, b, i);
	return (i);
}

int	one_five_hun(t_numb **a, t_numb **b, int i, int argc)
{
	if (argc <= 100)
	{
		i += one_hundred(a, b, i);
		return (i);
	}
	return (i);
}

int	main(int argc, char **argv)
{
	t_numb	*a;
	t_numb	*b;
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	a = NULL;
	if (argv[1][0] == '-' && argv[1][1] == 'j')
		ret = 1;
	else
		ret = 0;
	a = create_list(argc, argv, &a);
	b = NULL;
	if (a == NULL || first_check(a) == 0)
		return (0);
	if (argc >= 4 && argc <= 7)
		i += three_five(&a, &b, ret, argc);
	if (argc >= 8 && argc <= 500)
		i += one_five_hun(&a, &b, i, argc);
	if (final_check(a, b) == 1)
		i = final_sort(&a, &b, i);
	if (ret == 1)
		print_list(a);
	return (0);
}
