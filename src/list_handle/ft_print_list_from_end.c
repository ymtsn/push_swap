/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list_from_end.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:14:31 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/03 12:02:43 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"
#include "ft_printf.h"

void	ft_print_list_from_end(t_cdlst *dammy)
{
	t_cdlst	*prev;

	prev = dammy->prev;
	while (prev != dammy)
	{
		ft_printf("%d\n", prev->data);
		prev = prev->prev;
	}
}
