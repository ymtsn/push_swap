/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_terminate_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 00:00:36 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/21 18:39:33 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"

void	ft_terminate_node(t_cdlst *dammy)
{
	if (dammy == NULL || dammy->next == NULL)
		return ;
	while (dammy->next != NULL && dammy->next != dammy)
		ft_delete_head_node(dammy);
}
