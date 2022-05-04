/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_b_to_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:46:32 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/24 09:56:45 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"
#include "push_swap_stack_operator.h"
#include "push_swap_algo_utils.h"

static void	ft_push_a_and_rotate_a(t_lsthndl *lsthndl)
{
	ft_push_a(lsthndl);
	ft_rotate_a(lsthndl);
}

static void	ft_btoa_top_rotate(t_lsthndl *lsthndl, t_cdlst *target)
{
	t_cdlst	*dammy;

	dammy = lsthndl->dammy_b;
	while (dammy->next != target)
	{
		if (ft_search_by_index(dammy, target->index) == dammy)
			return ;
		if (ft_is_next_smallest_node(lsthndl, dammy->next))
			ft_push_a_and_rotate_a(lsthndl);
		else if (ft_is_next_smallest_node(lsthndl, dammy->prev))
		{
			ft_reverse_rotate_b(lsthndl);
			ft_push_a_and_rotate_a(lsthndl);
		}
		else if (ft_is_next_smallest_node(lsthndl, dammy->prev->prev))
		{
			ft_reverse_rotate_b(lsthndl);
			ft_reverse_rotate_b(lsthndl);
			ft_push_a_and_rotate_a(lsthndl);
		}
		else
			ft_rotate_b(lsthndl);
	}
}

static void	ft_btoa_top_rrotate(t_lsthndl *lsthndl, t_cdlst *target)
{
	t_cdlst	*dammy;

	dammy = lsthndl->dammy_b;
	while (dammy->next != target)
	{
		if (ft_search_by_index(dammy, target->index) == dammy)
			return ;
		if (ft_is_next_smallest_node(lsthndl, dammy->next))
			ft_push_a_and_rotate_a(lsthndl);
		else if (ft_is_next_smallest_node(lsthndl, dammy->next->next))
		{
			ft_rotate_b(lsthndl);
			ft_push_a_and_rotate_a(lsthndl);
		}
		else if (ft_is_next_smallest_node(lsthndl, dammy->next->next->next))
		{
			ft_rotate_b(lsthndl);
			ft_rotate_b(lsthndl);
			ft_push_a_and_rotate_a(lsthndl);
		}
		else
			ft_reverse_rotate_b(lsthndl);
	}
}

void	ft_move_b_node_to_a_top(t_lsthndl *lsthndl, t_cdlst *target)
{
	size_t	rotate_count;
	size_t	rrotate_count;
	t_cdlst	*dammy;

	dammy = lsthndl->dammy_b;
	if (dammy->next == target)
	{
		ft_push_a(lsthndl);
		return ;
	}
	rotate_count = ft_count_node_to_node_by_next(dammy->next, target);
	rrotate_count = ft_count_node_to_node_by_prev(dammy, target);
	if (rotate_count <= rrotate_count)
		ft_btoa_top_rotate(lsthndl, target);
	else
		ft_btoa_top_rrotate(lsthndl, target);
	ft_push_a(lsthndl);
}

void	ft_move_b_node_to_a_bottom(t_lsthndl *lsthndl, t_cdlst *target_node)
{
	target_node->sorted_flg = SORTED;
	ft_move_b_node_to_a_top(lsthndl, target_node);
	ft_rotate_a(lsthndl);
}
