/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 22:17:35 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/06 20:04:10 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"
#include "push_swap_stack_operator.h"

static void	reverse_rotate_do_main_job(t_cdlst *dammy)
{
	t_cdlst	*from_bottom_to_head;

	from_bottom_to_head = ft_get_last_node(dammy);
	ft_delete_node_link(dammy->prev);
	ft_add_node_to_list_head(from_bottom_to_head, dammy);
}

void	ft_reverse_rotate_a(t_lsthndl *lsthndl)
{
	t_operation_code	operation_code;

	operation_code = RRA;
	reverse_rotate_do_main_job(lsthndl->dammy_a);
	ft_record_operation(lsthndl, operation_code);
}

void	ft_reverse_rotate_b(t_lsthndl *lsthndl)
{
	t_operation_code	operation_code;

	operation_code = RRB;
	reverse_rotate_do_main_job(lsthndl->dammy_b);
	ft_record_operation(lsthndl, operation_code);
}

void	ft_reverse_rotate_a_and_b(t_lsthndl *lsthndl)
{
	t_operation_code	operation_code;

	operation_code = RRR;
	reverse_rotate_do_main_job(lsthndl->dammy_a);
	reverse_rotate_do_main_job(lsthndl->dammy_b);
	ft_record_operation(lsthndl, operation_code);
}
