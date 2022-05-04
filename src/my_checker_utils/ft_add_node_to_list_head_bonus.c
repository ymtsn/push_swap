/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_to_list_head.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:29:20 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/03 12:07:48 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle_bonus.h"

void	ft_add_node_to_list_head(t_cdlst *target_node, t_cdlst *dammy)
{
	t_cdlst	*head_node;

	if (ft_is_empty_list(dammy))
	{
		dammy->next = target_node;
		dammy->prev = target_node;
		target_node->prev = dammy;
		target_node->next = dammy;
	}
	else
	{
		head_node = ft_get_head_node(dammy);
		dammy->next = target_node;
		target_node->prev = dammy;
		target_node->next = head_node;
		head_node->prev = target_node;
	}
}
