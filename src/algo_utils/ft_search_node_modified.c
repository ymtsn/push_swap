/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_node_modified.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 23:11:22 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/19 19:06:27 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"
#include "push_swap_algo_utils.h"

static	t_cdlst	*ft_is_near_head(t_cdlst *dammy, t_cdlst *head, t_cdlst *tail)
{
	size_t	next_count;
	size_t	prev_count;

	next_count = ft_count_node_to_node_by_next(dammy->next, head);
	prev_count = ft_count_node_to_node_by_prev(dammy->next, prev);
	if (next_count <= prev_count)
		return (head);
	else
		return (tail);
}

t_cdlst	*ft_search_less_than_pivot(t_cdlst *dammy, size_t index)
{
	t_cdlst	*target;
	t_cdlst	*from_head;
	t_cdlst	*from_tail;

	target = dammy->next;
	while (target != dammy)
	{
		if (index > target->index)
			from_head = target;
		target = target->next;
	}
	target = dammy->next;
	while (target != dammy)
	{
		if (index > target->index)
			from_tail = target;
		target = target->prev;
	}
	return (ft_is_near_head(dammy, from_head, from_tail));
}

t_cdlst	*ft_search_bigger_than_pivot(t_cdlst *dammy, size_t index)
{
	t_cdlst	*target;
	t_cdlst	*from_head;
	t_cdlst	*from_tail;

	target = dammy->next;
	while (target != dammy)
	{
		if (index < target->index)
			from_head = target;
		target = target->next;
	}
	target = dammy->next;
	while (target != dammy)
	{
		if (index < target->index)
			from_tail = target;
		target = target->prev;
	}
	return (ft_is_near_head(dammy, from_head, from_tail));
}
