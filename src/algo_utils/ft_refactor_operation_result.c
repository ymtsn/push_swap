/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_refactor_operation_result.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:06:29 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/15 14:50:20 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"
#include "push_swap_stack_operator.h"
#define SA 0
#define SB 1
#define SS 2
#define PA 3
#define PB 4
#define RA 5
#define RB 6
#define RR 7
#define RRA 8
#define RRB 9
#define RRR 10

static t_cdlst	*ft_refactor_sa_sb_merge(t_cdlst *target)
{
	t_cdlst	*save;

	if (target->data == SA || target->data == SB)
	{
		save = target->next;
		ft_delete_node(target);
		save->data = SS;
		return (save);
	}
	return (target);
}

static t_cdlst	*ft_refactor_ra_rb_merge(t_cdlst *target)
{
	t_cdlst	*save;

	if (target->data == RA || target->data == RB)
	{
		save = target->next;
		ft_delete_node(target);
		save->data = RR;
		return (save);
	}
	return (target);
}

static t_cdlst	*ft_refactor_rra_rrb_merge(t_cdlst *target)
{
	t_cdlst	*save;

	if (target->data == RRA || target->data == RRB)
	{
		save = target->next;
		ft_delete_node(target);
		save->data = RRR;
		return (save);
	}
	return (target);
}

static t_cdlst	*ft_refactor_pa_pb_delete(t_cdlst *target)
{
	t_cdlst	*save;

	if (target->data == PA || target->data == PB)
	{
		save = target->next->next;
		ft_delete_node(target->next);
		ft_delete_node(target);
		return (save);
	}
	return (target);
}

void	ft_refactor_operation_result(t_lsthndl *lsthndl)
{
	t_cdlst	*dammy;
	t_cdlst	*target;
	int		two_data_sum;

	dammy = lsthndl->record_dammy;
	target = dammy->next;
	while (target != dammy && target->next != dammy)
	{
		two_data_sum = target->data + target->next->data;
		if (two_data_sum == PA + PB)
			target = ft_refactor_pa_pb_delete(target);
		else if (two_data_sum == SA + SB)
			target = ft_refactor_sa_sb_merge(target);
		else if (two_data_sum == RA + RB)
			target = ft_refactor_ra_rb_merge(target);
		else if (two_data_sum == RRA + RRB)
			target = ft_refactor_rra_rrb_merge(target);
		target = target->next;
	}
}
