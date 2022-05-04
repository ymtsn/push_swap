/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stacka_six_or_less_node.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 22:42:33 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/21 08:12:03 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"
#include "push_swap_error_handle.h"
#include "push_swap_algo_utils.h"
#include "push_swap_stack_operator.h"

void	ft_push_b_biggest_number(t_lsthndl *lsthndl)
{
	t_cdlst	*target;
	t_cdlst	*biggest;

	target = lsthndl->dammy_a->next;
	biggest = target;
	while (target != lsthndl->dammy_a)
	{
		if (target->data > biggest->data)
			biggest = target;
		target = target->next;
	}
	ft_move_a_node_to_b_top(lsthndl, biggest, 0);
}

static void	ft_init_number_and_flg(t_cdlst *dmy, int *frt, int *scd, int *trd)
{
	*frt = dmy->next->data;
	*scd = dmy->next->next->data;
	*trd = dmy->next->next->next->data;
	dmy->next->sorted_flg = SORTED;
	dmy->next->next->sorted_flg = SORTED;
	dmy->next->next->next->sorted_flg = SORTED;
}

void	ft_sort_stacka_three_number(t_lsthndl *lsthndl)
{
	int		first;
	int		second;
	int		third;
	t_cdlst	*dammy;

	dammy = lsthndl->dammy_a;
	ft_init_number_and_flg(dammy, &first, &second, &third);
	if (first > second && second < third && first < third)
		ft_swap_a(lsthndl);
	else if (first > second && second > third && first > third)
	{
		ft_swap_a(lsthndl);
		ft_reverse_rotate_a(lsthndl);
	}
	else if (first > second && second < third && first > third)
		ft_rotate_a(lsthndl);
	else if (first < second && second > third && first < third)
	{
		ft_swap_a(lsthndl);
		ft_rotate_a(lsthndl);
	}
	else if (first < second && second > third && first > third)
		ft_reverse_rotate_a(lsthndl);
}

void	ft_sort_stacka_two_number(t_lsthndl *lsthndl)
{
	t_cdlst	*dammy;

	dammy = lsthndl->dammy_a;
	if (dammy->next->data > dammy->next->next->data)
		ft_swap_a(lsthndl);
	dammy->next->sorted_flg = SORTED;
	dammy->next->next->sorted_flg = SORTED;
}

void	ft_sort_stacka_six_or_less_node(t_lsthndl *lsthndl, size_t stacka_count)
{
	if (stacka_count == 2)
		ft_sort_stacka_two_number(lsthndl);
	else if (stacka_count == 3)
		ft_sort_stacka_three_number(lsthndl);
	else if (stacka_count == 4)
	{
		ft_push_b_biggest_number(lsthndl);
		ft_sort_stacka_three_number(lsthndl);
	}
	else if (stacka_count == 5)
	{
		ft_push_b_biggest_number(lsthndl);
		ft_push_b_biggest_number(lsthndl);
		ft_sort_stacka_three_number(lsthndl);
		ft_sort_stackb_six_or_less_node(lsthndl, 2);
	}
	else if (stacka_count == 6)
	{
		ft_push_b_biggest_number(lsthndl);
		ft_push_b_biggest_number(lsthndl);
		ft_push_b_biggest_number(lsthndl);
		ft_sort_stacka_three_number(lsthndl);
		ft_sort_stackb_six_or_less_node(lsthndl, 3);
	}
}
