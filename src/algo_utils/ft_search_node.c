/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 23:11:22 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/21 08:46:49 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"
#include "push_swap_algo_utils.h"

t_cdlst	*ft_search_less_than_pivot(t_cdlst *top, size_t index, t_cdlst *btm)
{
	while (top != btm)
	{
		if (index > top->index)
			return (top);
		top = top->next;
	}
	return (btm);
}

t_cdlst	*ft_search_bigger_than_pivot(t_cdlst *top, size_t index, t_cdlst *btm)
{
	while (top != btm)
	{
		if (index < top->index)
			return (top);
		top = top->next;
	}
	return (btm);
}

t_cdlst	*ft_search_by_index(t_cdlst *dammy, size_t index)
{
	t_cdlst	*top;
	t_cdlst	*btm;

	top = dammy->next;
	btm = dammy;
	while (top != btm)
	{
		if (index == top->index)
			return (top);
		top = top->next;
	}
	return (btm);
}
