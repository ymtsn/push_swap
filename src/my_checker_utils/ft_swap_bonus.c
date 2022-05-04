/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 22:15:29 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/06 20:04:29 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle_bonus.h"
#include "push_swap_stack_operator_bonus.h"
#define DO_NOTHING 1
#define DONE 0

static	int	swap_do_main_job(t_cdlst *dammy)
{
	if (ft_is_empty_list(dammy))
		return (DO_NOTHING);
	if (ft_is_only_one_node(dammy))
		return (DO_NOTHING);
	ft_swap_node(dammy->next, dammy->next->next);
	return (DONE);
}

void	ft_swap_a(t_lsthndl *lsthndl)
{
	t_operation_code	operation_code;

	operation_code = SA;
	if (swap_do_main_job(lsthndl->dammy_a) == DO_NOTHING)
		return ;
	ft_record_operation(lsthndl, operation_code);
}

void	ft_swap_b(t_lsthndl *lsthndl)
{
	t_operation_code	operation_code;

	operation_code = SB;
	if (swap_do_main_job(lsthndl->dammy_b) == DO_NOTHING)
		return ;
	ft_record_operation(lsthndl, operation_code);
}

void	ft_swap_a_and_b(t_lsthndl *lsthndl)
{
	t_operation_code	operation_code;

	operation_code = SS;
	swap_do_main_job(lsthndl->dammy_a);
	swap_do_main_job(lsthndl->dammy_b);
	ft_record_operation(lsthndl, operation_code);
}
