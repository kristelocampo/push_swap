/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:45:40 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/23 15:17:58 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <stdio.h>
# include <unistd.h>

typedef struct s_numb{
	long			numb;
	struct s_numb	*next;

}				t_numb;

void		swap_sa(t_numb **numb);
void		swap_sb(t_numb **numb);
void		swap_ss(t_numb **a, t_numb **b);
void		swap_ra(t_numb **numb);
void		swap_rb(t_numb **numb);
void		swap_rr(t_numb **a, t_numb **b);
void		swap_rra(t_numb **numb);
void		swap_rrb(t_numb **numb);
void		swap_rrr(t_numb **a, t_numb **b);
void		swap_pa(t_numb **a, t_numb **b);
void		swap_pb(t_numb **a, t_numb **b);

//3 random number
int			case1(t_numb **a);
int			case2(t_numb **a);
int			case3(t_numb **a);
int			case4(t_numb **a);
int			case5(t_numb **a);
int			sort_3num(t_numb **a);

//5 random number
int			step1(t_numb **a, t_numb **b, int i);
int			sort_a(t_numb **a, t_numb **b);
int			pos_a(t_numb **a, t_numb **b, int pos);
int			find_pos(t_numb *a, int sm);
int			sort_5num(t_numb **a, t_numb **b, int i);

//check_order
int			first_check(t_numb *numb);
int			final_check(t_numb *num, t_numb *b);
int			min_num(t_numb *a, int min);
long		biggest_num(t_numb *a);
long		smallest_num(t_numb *b);

//count ra rra
int			a_step_count(t_numb **a, int pos);
int			rra_count(t_numb **a, int pos);
int			ra_count(t_numb **a, int pos);
int			sra_rra_count2(t_numb **a, int num, int i);
int			ra_rra_count(t_numb **a, int total, int pos);
//b function
int			b_smallest_pos(t_numb *b, int b_sm);
int			b_total(t_numb *b);
int			b_one_empty(t_numb **a, t_numb **b);
int			b_small_pos(t_numb *b, int b_small);
int			b_sort(t_numb **a, t_numb **b);
int			b_rb_count(t_numb **b, int pos);
int			b_rrb_count(t_numb **b, int pos);
int			b_pos(t_numb **a, t_numb **b);
int			b_step_count(t_numb **b, int pos);
//search
long		smallest_num(t_numb *b);
long		biggest_num(t_numb *a);
int			min_num(t_numb *a, int min);
int			pos_num(t_numb *a, int pos, int sm);
int			push_find(t_numb **a, t_numb **b, int sm);
//sort_util
int			total_value(t_numb *a);
int			push_pb(t_numb **a, t_numb **b);
int			range(t_numb *a, int local_max);
int			final_sort(t_numb **a, t_numb **b, int i);
//check_digit
long long	digit_confirm(const char *str, t_numb **a);
void		above_max(long long nbr, t_numb **a);
void		not_num(t_numb **a);
void		check_dup(t_numb *head, int nbr, t_numb **a);

//sort100
int			pos_function(t_numb *a, int local_max);
int			b_before_push(t_numb **a, t_numb **b);
int			a_handle_range(t_numb **a, t_numb **b, int pos, int chunk);
int			one_hundred(t_numb **a, t_numb **b, int i);

//send b to a
int			rb_rrb_last_step(t_numb **a, t_numb **b, int total);
int			push_rb_pa(t_numb **a, t_numb **b, int pos, int i);
int			push_rrb_pa(t_numb **a, t_numb **b, int pos, int total);

//main
int			three_five(t_numb **a, t_numb **b, int ret, int argc);
int			one_five_hun(t_numb **a, t_numb **b, int i, int argc);
t_numb		*create_list(int argc, char **argv, t_numb **a);
void		creat_list2(char **argv, t_numb **a, t_numb *head);
void		print_list(t_numb *num);

//free

void		free_all(t_numb **all);
void		free_a_b(t_numb **a, t_numb **b);
#endif