/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_last_node.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:36:01 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/23 09:07:48 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"

void	ft_delete_last_node(t_cdlst *dammy)
{
	t_cdlst	*target_for_free;

	if (dammy == NULL || dammy->prev == NULL)
		return ;
	target_for_free = dammy->prev;
	dammy->prev = dammy->prev->prev;
	free(target_for_free);
}
