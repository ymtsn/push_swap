/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicate_number.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:48:17 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/07 23:21:29 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"
#include "push_swap_error_handle.h"

int	ft_check_duplicate_number(t_cdlst *dammy)
{
	t_cdlst	*current;
	t_cdlst	*next;

	current = dammy->next;
	next = current->next;
	while (dammy != current->next)
	{
		while (dammy != next)
		{
			if (current->data == next->data)
				return (INVALID);
			next = next->next;
		}
		current = current->next;
		next = current->next;
	}
	return (VALID);
}
