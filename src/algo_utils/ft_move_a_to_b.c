/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_a_to_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:46:32 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/24 09:55:00 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"
#include "push_swap_stack_operator.h"
#include "push_swap_algo_utils.h"

void	ft_atob_top_rotate(t_lsthndl *lsthndl, t_cdlst *target, size_t index)
{
	while (lsthndl->dammy_a->next != target)
	{
		if (lsthndl->dammy_b->next->index < index / 2)
			ft_rotate_a_and_b(lsthndl);
		else
			ft_rotate_a(lsthndl);
	}
}

void	ft_atob_top_rrotate(t_lsthndl *lsthndl, t_cdlst *target, size_t index)
{
	while (lsthndl->dammy_a->next != target)
	{
		if (lsthndl->dammy_b->next->index > index / 2)
			ft_reverse_rotate_a_and_b(lsthndl);
		else
			ft_reverse_rotate_a(lsthndl);
	}
}

void	ft_move_a_node_to_b_top(t_lsthndl *hdl, t_cdlst *target, size_t index)
{
	size_t	rotate_count;
	size_t	rrotate_count;
	t_cdlst	*dammy;

	dammy = hdl->dammy_a;
	if (dammy->next == target)
	{
		ft_push_b(hdl);
		return ;
	}
	rotate_count = ft_count_node_to_node_by_next(dammy->next, target);
	rrotate_count = ft_count_node_to_node_by_prev(dammy, target);
	if (rotate_count <= rrotate_count)
		ft_atob_top_rotate(hdl, target, index);
	else
		ft_atob_top_rrotate(hdl, target, index);
	ft_push_b(hdl);
}
