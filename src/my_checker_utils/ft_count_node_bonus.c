/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:40:45 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/19 18:41:18 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle_bonus.h"

size_t	ft_count_node_till_end(t_cdlst *dammy)
{
	t_cdlst	*current;
	size_t	size;

	current = dammy->next;
	size = 0;
	while (current != dammy)
	{
		current = current->next;
		size++;
	}
	return (size);
}

size_t	ft_count_node_to_node_by_next(t_cdlst *node_a, t_cdlst *node_b)
{
	size_t	size;

	size = 0;
	while (node_a != node_b)
	{
		node_a = node_a->next;
		size++;
	}
	return (size);
}

size_t	ft_count_node_to_node_by_prev(t_cdlst *node_a, t_cdlst *node_b)
{
	size_t	size;

	size = 0;
	while (node_a != node_b)
	{
		node_a = node_a->prev;
		size++;
	}
	return (size);
}
