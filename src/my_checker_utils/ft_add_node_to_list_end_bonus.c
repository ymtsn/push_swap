/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_to_list_end.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:29:20 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/03 12:07:37 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle_bonus.h"

void	ft_add_node_to_list_end(t_cdlst *target_node, t_cdlst *dammy)
{
	t_cdlst	*last_node;

	if (ft_is_empty_list(dammy))
	{
		dammy->next = target_node;
		dammy->prev = target_node;
		target_node->next = dammy;
		target_node->prev = dammy;
	}
	else
	{
		last_node = ft_get_last_node(dammy);
		last_node->next = target_node;
		target_node->prev = last_node;
		target_node->next = dammy;
		dammy->prev = target_node;
	}
}
