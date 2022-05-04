/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_head_node.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:35:54 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/23 09:06:57 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"

void	ft_delete_head_node(t_cdlst *dammy)
{
	t_cdlst	*target_for_free;

	if (dammy == NULL || dammy->next == NULL)
		return ;
	target_for_free = dammy->next;
	dammy->next = dammy->next->next;
	free(target_for_free);
}
