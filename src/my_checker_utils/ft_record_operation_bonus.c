/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_record_operation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 22:37:42 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/23 12:54:12 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle_bonus.h"
#include "push_swap_error_handle_bonus.h"

void	ft_record_operation(t_lsthndl *lsthndl, int stack_operator)
{
	t_cdlst	*operator_save_node;

	operator_save_node = ft_create_new_node(stack_operator);
	if (operator_save_node == NULL)
	{
		ft_terminate_lsthndl(lsthndl);
		ft_myexit(ERR_MSG, EXIT_FAILURE, 2);
	}
	ft_add_node_to_list_head(operator_save_node, lsthndl->record_dammy);
}
