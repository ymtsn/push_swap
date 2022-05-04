/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:10:05 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/24 08:34:40 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"
#include "push_swap_error_handle.h"
#include "push_swap_algo_utils.h"
#include "push_swap_stack_operator.h"

static void	ft_manage_stackb_has_nodes(t_lsthndl *lsthndl, int *stack_chunk_num)
{
	t_cdlst	*target;
	t_cdlst	*dammy;
	size_t	pivot;
	size_t	stackb_count;

	dammy = lsthndl->dammy_b;
	stackb_count = ft_count_node_till_end(dammy);
	if (stackb_count <= 6)
		ft_sort_stackb_six_or_less_node(lsthndl, stackb_count);
	else
	{
		*stack_chunk_num = *stack_chunk_num + 1;
		pivot = ft_get_pivot_by_index(dammy->next, dammy->prev);
		target = ft_search_bigger_than_pivot(dammy->next, pivot, dammy);
		while (target->sorted_flg != THIS_IS_DAMMY_NODE)
		{
			target->sorted_flg = *stack_chunk_num;
			ft_move_b_node_to_a_top(lsthndl, target);
			target = ft_search_bigger_than_pivot(dammy->next, pivot, dammy);
		}
	}
}

static void	ft_pushback_stacka_node_to_stakb(t_lsthndl *lsthndl, int target_flg)
{
	t_cdlst	*target;
	t_cdlst	*dammy;

	dammy = lsthndl->dammy_a;
	target = dammy->next;
	while (target->sorted_flg == target_flg)
	{
		ft_move_smallest_a_node_to_a_bottom(lsthndl);
		ft_move_smallest_b_node_to_a_bottom(lsthndl);
		ft_move_smallest_b_node_to_a_bottom(lsthndl);
		if (target->sorted_flg == target_flg)
			ft_push_b(lsthndl);
		ft_move_smallest_a_node_to_a_bottom(lsthndl);
		ft_move_smallest_b_node_to_a_bottom(lsthndl);
		ft_move_smallest_b_node_to_a_bottom(lsthndl);
		target = dammy->next;
	}
}

static void	ft_manage_stackb_empty(t_lsthndl *lsthndl, int *stack_chunk_num)
{
	if (lsthndl->dammy_a->next->sorted_flg == NOT_PUSHED_B_YET)
		 ft_pushback_stacka_node_to_stakb(lsthndl, NOT_PUSHED_B_YET);
	else
	{
		ft_pushback_stacka_node_to_stakb(lsthndl, *stack_chunk_num);
		*stack_chunk_num = *stack_chunk_num - 1;
	}
}

static void	ft_devide_stacka_and_stackb_half_by_pivot(t_lsthndl *lsthndl)
{
	t_cdlst	*dammy;
	t_cdlst	*push_target;
	size_t	pivot;

	dammy = lsthndl->dammy_a;
	pivot = ft_get_pivot_by_index(dammy->next, dammy->prev);
	push_target = ft_search_less_than_pivot(dammy->next, pivot, dammy);
	while (push_target->sorted_flg == NOT_PUSHED_B_YET)
	{
		ft_move_a_node_to_b_top(lsthndl, push_target, pivot);
		push_target = ft_search_less_than_pivot(dammy->next, pivot, dammy);
	}
}

void	ft_sort(t_lsthndl *lsthndl)
{
	t_cdlst	*dammy_a;
	t_cdlst	*dammy_b;
	int		stack_chunk_num;
	size_t	stacka_count;

	stack_chunk_num = 0;
	dammy_a = lsthndl->dammy_a;
	dammy_b = lsthndl->dammy_b;
	stacka_count = ft_count_node_till_end(dammy_a);
	if (stacka_count <= 6)
		ft_sort_stacka_six_or_less_node(lsthndl, stacka_count);
	if (ft_check_sorted(dammy_a) && ft_is_empty_list(dammy_b))
		return ;
	ft_devide_stacka_and_stackb_half_by_pivot(lsthndl);
	while (1)
	{
		if (ft_is_empty_list(dammy_b))
			ft_manage_stackb_empty(lsthndl, &stack_chunk_num);
		else
			ft_manage_stackb_has_nodes(lsthndl, &stack_chunk_num);
		if (ft_check_sorted(dammy_a) && ft_is_empty_list(dammy_b))
			return ;
	}
}
