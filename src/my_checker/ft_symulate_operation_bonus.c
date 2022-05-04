/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_symulate_operation.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:02:25 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/20 08:32:19 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle_bonus.h"
#include "push_swap_stack_operator_bonus.h"

void	ft_symulate_operation(t_lsthndl *lsthndl)
{
	void	(*func_ptr[11])(t_lsthndl*);
	t_cdlst	*target;
	t_cdlst	*dammy;

	func_ptr[0] = ft_swap_a;
	func_ptr[1] = ft_swap_b;
	func_ptr[2] = ft_swap_a_and_b;
	func_ptr[3] = ft_push_a;
	func_ptr[4] = ft_push_b;
	func_ptr[5] = ft_rotate_a;
	func_ptr[6] = ft_rotate_b;
	func_ptr[7] = ft_rotate_a_and_b;
	func_ptr[8] = ft_reverse_rotate_a;
	func_ptr[9] = ft_reverse_rotate_b;
	func_ptr[10] = ft_reverse_rotate_a_and_b;
	dammy = lsthndl->checker_dammy;
	target = dammy->next;
	while (target != dammy)
	{
		func_ptr[target->data](lsthndl);
		target = target->next;
	}
}
