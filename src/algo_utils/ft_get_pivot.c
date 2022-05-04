/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_pivot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 07:41:34 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/19 19:08:54 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"
#include "push_swap_algo_utils.h"

size_t	ft_get_pivot_by_index(t_cdlst *target_a, t_cdlst *target_b)
{
	size_t	distance;
	size_t	big_index;
	size_t	small_index;

	distance = ft_count_node_to_node_by_next(target_a, target_b);
	if (distance == 0)
		return (target_a->data);
	if (distance == 1)
	{
		if (target_a->index < target_b->index)
			return (target_a->index);
		else
			return (target_b->index);
	}
	big_index = ft_get_biggest_index(target_a, target_b);
	small_index = ft_get_least_index(target_a, target_b);
	return ((big_index + small_index) / 2);
}
