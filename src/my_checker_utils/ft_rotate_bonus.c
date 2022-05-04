/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 22:17:35 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/06 20:06:00 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle_bonus.h"
#include "push_swap_stack_operator_bonus.h"

static void	rotate_do_main_job(t_cdlst *dammy)
{
	t_cdlst	*from_head_to_bottom;

	from_head_to_bottom = ft_get_head_node(dammy);
	ft_delete_node_link(dammy->next);
	ft_add_node_to_list_end(from_head_to_bottom, dammy);
}

void	ft_rotate_a(t_lsthndl *lsthndl)
{
	t_operation_code	operation_code;

	operation_code = RA;
	rotate_do_main_job(lsthndl->dammy_a);
	ft_record_operation(lsthndl, operation_code);
}

void	ft_rotate_b(t_lsthndl *lsthndl)
{
	t_operation_code	operation_code;

	operation_code = RB;
	rotate_do_main_job(lsthndl->dammy_b);
	ft_record_operation(lsthndl, operation_code);
}

void	ft_rotate_a_and_b(t_lsthndl *lsthndl)
{
	t_operation_code	operation_code;

	operation_code = RR;
	rotate_do_main_job(lsthndl->dammy_a);
	rotate_do_main_job(lsthndl->dammy_b);
	ft_record_operation(lsthndl, operation_code);
}
