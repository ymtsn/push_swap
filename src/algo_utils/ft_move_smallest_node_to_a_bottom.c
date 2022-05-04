/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_smallest_node_to_a_bottom.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:08:44 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/19 22:14:33 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"
#include "push_swap_stack_operator.h"
#include "push_swap_algo_utils.h"

int	ft_is_next_smallest_node(t_lsthndl *lsthndl, t_cdlst *target)
{
	t_cdlst	*dammy_a;
	t_cdlst	*dammy_b;
	t_cdlst	*a_bottom;

	dammy_a = lsthndl->dammy_a;
	dammy_b = lsthndl->dammy_b;
	a_bottom = dammy_a->prev;
	if (target == dammy_a || target == dammy_b)
		return (0);
	if (target->sorted_flg == SORTED)
		return (0);
	if (target->index == 0)
	{
		target->sorted_flg = SORTED;
		return (1);
	}
	if (target->index - 1 == a_bottom->index && a_bottom->sorted_flg == SORTED)
	{
		target->sorted_flg = SORTED;
		return (1);
	}
	return (0);
}

void	ft_move_smallest_b_node_to_a_bottom(t_lsthndl *lsthndl)
{
	t_cdlst	*dammy;

	dammy = lsthndl->dammy_b;
	if (ft_is_next_smallest_node(lsthndl, dammy->next))
		ft_move_b_node_to_a_bottom(lsthndl, dammy->next);
	if (ft_is_next_smallest_node(lsthndl, dammy->next->next))
		ft_move_b_node_to_a_bottom(lsthndl, dammy->next->next);
	if (ft_is_next_smallest_node(lsthndl, dammy->next->next->next))
		ft_move_b_node_to_a_bottom(lsthndl, dammy->next->next->next);
	if (ft_is_next_smallest_node(lsthndl, dammy->prev))
		ft_move_b_node_to_a_bottom(lsthndl, dammy->prev);
	if (ft_is_next_smallest_node(lsthndl, dammy->prev->prev))
		ft_move_b_node_to_a_bottom(lsthndl, dammy->prev->prev);
	if (ft_is_next_smallest_node(lsthndl, dammy->prev->prev->prev))
		ft_move_b_node_to_a_bottom(lsthndl, dammy->prev->prev->prev);
}

void	ft_move_smallest_a_node_to_a_bottom(t_lsthndl *lsthndl)
{
	t_cdlst	*dammy;

	dammy = lsthndl->dammy_a;
	if (ft_is_next_smallest_node(lsthndl, dammy->next->next))
	{
		ft_swap_a(lsthndl);
		ft_rotate_a(lsthndl);
	}
	if (ft_is_next_smallest_node(lsthndl, dammy->next))
		ft_rotate_a(lsthndl);
}
