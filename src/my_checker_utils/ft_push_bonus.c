/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 22:11:52 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/04 21:09:48 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle_bonus.h"
#include "push_swap_stack_operator_bonus.h"

void	ft_push_a(t_lsthndl *lsthndl)
{
	t_cdlst				*from_head_b_to_head_a;
	t_operation_code	operation_code;

	operation_code = PA;
	if (ft_is_empty_list(lsthndl->dammy_b))
		return ;
	from_head_b_to_head_a = ft_get_head_node(lsthndl->dammy_b);
	ft_delete_node_link(lsthndl->dammy_b->next);
	ft_add_node_to_list_head(from_head_b_to_head_a, lsthndl->dammy_a);
	ft_record_operation(lsthndl, operation_code);
}

void	ft_push_b(t_lsthndl *lsthndl)
{
	t_cdlst				*from_head_a_to_head_b;
	t_operation_code	operation_code;

	operation_code = PB;
	if (ft_is_empty_list(lsthndl->dammy_a))
		return ;
	from_head_a_to_head_b = ft_get_head_node(lsthndl->dammy_a);
	ft_delete_node_link(lsthndl->dammy_a->next);
	ft_add_node_to_list_head(from_head_a_to_head_b, lsthndl->dammy_b);
	ft_record_operation(lsthndl, operation_code);
}
