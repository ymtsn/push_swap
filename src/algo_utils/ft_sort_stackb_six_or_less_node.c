/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stackb_six_or_less_node.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 22:42:33 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/21 08:47:07 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"
#include "push_swap_error_handle.h"
#include "push_swap_algo_utils.h"
#include "push_swap_stack_operator.h"

void	ft_push_a_smallest_number(t_lsthndl *lsthndl)
{
	t_cdlst	*target;
	t_cdlst	*small_node;

	target = lsthndl->dammy_b->next;
	small_node = target;
	while (target != lsthndl->dammy_b)
	{
		if (target->data < small_node->data)
			small_node = target;
		target = target->next;
	}
	small_node->sorted_flg = SORTED;
	ft_move_b_node_to_a_bottom(lsthndl, small_node);
}

static void	ft_init_number_and_flg(t_cdlst *dmy, int *frt, int *scd, int *trd)
{
	*frt = dmy->next->data;
	*scd = dmy->next->next->data;
	*trd = dmy->next->next->next->data;
}

void	ft_sort_stackb_three_number(t_lsthndl *lsthndl)
{
	int		first;
	int		second;
	int		third;

	ft_init_number_and_flg(lsthndl->dammy_b, &first, &second, &third);
	if (first > second && second < third && first < third)
		ft_swap_b(lsthndl);
	else if (first > second && second > third && first > third)
	{
		ft_swap_b(lsthndl);
		ft_reverse_rotate_b(lsthndl);
	}
	else if (first > second && second < third && first > third)
		ft_rotate_b(lsthndl);
	else if (first < second && second > third && first < third)
	{
		ft_swap_b(lsthndl);
		ft_rotate_b(lsthndl);
	}
	else if (first < second && second > third && first > third)
		ft_reverse_rotate_b(lsthndl);
	ft_move_b_node_to_a_bottom(lsthndl, lsthndl->dammy_b->next);
	ft_move_b_node_to_a_bottom(lsthndl, lsthndl->dammy_b->next);
	ft_move_b_node_to_a_bottom(lsthndl, lsthndl->dammy_b->next);
}

void	ft_sort_stackb_two_number(t_lsthndl *lsthndl)
{
	t_cdlst	*dammy;

	dammy = lsthndl->dammy_b;
	if (dammy->next->data > dammy->next->next->data)
		ft_swap_b(lsthndl);
	ft_move_b_node_to_a_bottom(lsthndl, dammy->next);
	ft_move_b_node_to_a_bottom(lsthndl, dammy->next);
}

void	ft_sort_stackb_six_or_less_node(t_lsthndl *lsthndl, size_t stackb_count)
{
	if (stackb_count == 1)
		ft_move_b_node_to_a_bottom(lsthndl, lsthndl->dammy_b->next);
	else if (stackb_count == 2)
		ft_sort_stackb_two_number(lsthndl);
	else if (stackb_count == 3)
		ft_sort_stackb_three_number(lsthndl);
	else if (stackb_count == 4)
	{
		ft_push_a_smallest_number(lsthndl);
		ft_sort_stackb_three_number(lsthndl);
	}
	else if (stackb_count == 5)
	{
		ft_push_a_smallest_number(lsthndl);
		ft_push_a_smallest_number(lsthndl);
		ft_sort_stackb_three_number(lsthndl);
	}
	else if (stackb_count == 6)
	{
		ft_push_a_smallest_number(lsthndl);
		ft_push_a_smallest_number(lsthndl);
		ft_push_a_smallest_number(lsthndl);
		ft_sort_stackb_three_number(lsthndl);
	}
}
