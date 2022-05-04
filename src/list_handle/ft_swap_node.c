/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 23:27:33 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/03 12:05:44 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"

static void	ft_swap_node_linked_indirect(t_cdlst *node_a, t_cdlst *node_b)
{
	 t_cdlst	*buf;

	buf = node_b->prev->next;
	node_b->prev->next = node_a->prev->next;
	node_a->prev->next = buf;
	buf = node_a->next->prev;
	node_a->next->prev = node_b->next->prev;
	node_b->next->prev = buf;
	buf = node_a->prev;
	node_a->prev = node_b->prev;
	node_b->prev = buf;
	buf = node_a->next;
	node_a->next = node_b->next;
	node_b->next = buf;
}

static void	ft_swap_node_linked_direct(t_cdlst *node_a, t_cdlst *node_b)
{
	node_a->prev->next = node_b;
	node_b->next->prev = node_a;
	node_b->prev = node_a->prev;
	node_a->prev = node_b;
	node_a->next = node_b->next;
	node_b->next = node_a;
}

void	ft_swap_node(t_cdlst *node_a, t_cdlst *node_b)
{
	if (node_a->next == node_b)
		ft_swap_node_linked_direct(node_a, node_b);
	else
		ft_swap_node_linked_indirect(node_a, node_b);
}
