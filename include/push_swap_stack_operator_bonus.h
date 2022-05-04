/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_stack_operator_bonus.h                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:37:12 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/23 21:26:49 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_STACK_OPERATOR_BONUS_H
# define PUSH_SWAP_STACK_OPERATOR_BONUS_H
# include <stdio.h>
# include <stdlib.h>
typedef enum e_operation_code{
	SA,
	SB,
	SS,
	PA,
	PB,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR
}t_operation_code;
/* push_swap operation functions */
void	ft_swap_a(t_lsthndl *lsthndl);
void	ft_swap_b(t_lsthndl *lsthndl);
void	ft_swap_a_and_b(t_lsthndl *lsthndl);
void	ft_push_a(t_lsthndl *lsthndl);
void	ft_push_b(t_lsthndl *lsthndl);
void	ft_rotate_a(t_lsthndl *lsthndl);
void	ft_rotate_b(t_lsthndl *lsthndl);
void	ft_rotate_a_and_b(t_lsthndl *lsthndl);
void	ft_reverse_rotate_a(t_lsthndl *lsthndl);
void	ft_reverse_rotate_b(t_lsthndl *lsthndl);
void	ft_reverse_rotate_a_and_b(t_lsthndl *lsthndl);
#endif
