/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 08:30:24 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/13 08:39:27 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"

void	ft_set_index(t_lsthndl *lsthndl)
{
	t_cdlst	*dammy;
	t_cdlst	*target;
	t_cdlst	*compare;
	size_t	counter;

	dammy = lsthndl->dammy_a;
	target = dammy->next;
	compare = target;
	counter = 0;
	while (target != dammy)
	{
		while (compare != dammy)
		{
			if (target->data > compare->data)
				counter++;
			compare = compare->next;
		}
		target->index = counter;
		counter = 0;
		compare = dammy->next;
		target = target->next;
	}
}
