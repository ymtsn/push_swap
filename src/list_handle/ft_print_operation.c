/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_operation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 23:13:41 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/21 20:54:43 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"
#include "libft.h"
#include "ft_printf.h"

void	ft_operation_name_array_init(t_lsthndl *lsthndl)
{
	(void)ft_strlcpy(lsthndl->operation_name[0], "sa\n\0", 5);
	(void)ft_strlcpy(lsthndl->operation_name[1], "sb\n\0", 5);
	(void)ft_strlcpy(lsthndl->operation_name[2], "ss\n\0", 5);
	(void)ft_strlcpy(lsthndl->operation_name[3], "pa\n\0", 5);
	(void)ft_strlcpy(lsthndl->operation_name[4], "pb\n\0", 5);
	(void)ft_strlcpy(lsthndl->operation_name[5], "ra\n\0", 5);
	(void)ft_strlcpy(lsthndl->operation_name[6], "rb\n\0", 5);
	(void)ft_strlcpy(lsthndl->operation_name[7], "rr\n\0", 5);
	(void)ft_strlcpy(lsthndl->operation_name[8], "rra\n", 5);
	(void)ft_strlcpy(lsthndl->operation_name[9], "rrb\n", 5);
	(void)ft_strlcpy(lsthndl->operation_name[10], "rrr\n", 5);
}

void	ft_print_operation(t_lsthndl *lsthndl)
{
	t_cdlst	*prev;

	prev = lsthndl->record_dammy->prev;
	while (prev != lsthndl->record_dammy)
	{
		ft_printf("%s", lsthndl->operation_name[prev->data]);
		prev = prev->prev;
	}
}
