/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 00:56:46 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/06 21:08:55 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle_bonus.h"
#include "push_swap_error_handle_bonus.h"
#define SORTED 1
#define NOT_SORTED 0

int	ft_check_sorted(t_cdlst *dammy)
{
	t_cdlst	*current;
	long	prev_data;

	prev_data = LONG_MIN;
	current = dammy->next;
	while (dammy != current)
	{
		if (current->data < prev_data)
			return (NOT_SORTED);
		prev_data = current->data;
		current = current->next;
	}
	return (SORTED);
}
