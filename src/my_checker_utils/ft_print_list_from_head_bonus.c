/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list_from_head.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:14:31 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/03 12:02:51 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle_bonus.h"
#include "ft_printf.h"

void	ft_print_list_from_head(t_cdlst *dammy)
{
	t_cdlst	*next;

	next = dammy->next;
	while (next != dammy)
	{
		ft_printf("%d\n", next->data);
		next = next->next;
	}
}
