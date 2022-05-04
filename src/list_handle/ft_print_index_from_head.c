/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_index_from_head.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:14:31 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/13 08:44:25 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"
#include "ft_printf.h"

void	ft_print_index_from_head(t_cdlst *dammy)
{
	t_cdlst	*next;

	next = dammy->next;
	while (next != dammy)
	{
		ft_printf("%d\n", next->index);
		next = next->next;
	}
}
