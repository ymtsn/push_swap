/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 06:55:17 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/13 19:25:47 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"
#include "push_swap_algo_utils.h"

size_t	ft_get_least_index(t_cdlst *target_a, t_cdlst *target_b)
{
	size_t	save_index;

	save_index = target_a->index;
	while (target_a != target_b)
	{
		if (save_index > target_a->index)
			save_index = target_a->index;
		target_a = target_a->next;
	}
	return (save_index);
}

size_t	ft_get_biggest_index(t_cdlst *target_a, t_cdlst *target_b)
{
	size_t	save_index;

	save_index = target_a->index;
	while (target_a != target_b)
	{
		if (save_index < target_a->index)
			save_index = target_a->index;
		target_a = target_a->next;
	}
	return (save_index);
}
