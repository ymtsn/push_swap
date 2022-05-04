/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_node_link.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 10:05:56 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/02 10:12:11 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle_bonus.h"

void	ft_delete_node_link(t_cdlst *target_node)
{
	target_node->prev->next = target_node->next;
	target_node->next->prev = target_node->prev;
}
