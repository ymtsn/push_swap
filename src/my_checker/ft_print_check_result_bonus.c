/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_check_result.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:34:33 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/23 12:51:45 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle_bonus.h"
#include "push_swap_error_handle_bonus.h"
#include "push_swap_my_checker_bonus.h"
#include "ft_printf.h"

void	ft_print_check_result(t_lsthndl *lsthndl)
{
	t_cdlst	*dammy_a;
	t_cdlst	*dammy_b;

	dammy_a = lsthndl->dammy_a;
	dammy_b = lsthndl->dammy_b;
	if (ft_check_sorted(dammy_a) && ft_is_empty_list(dammy_b))
	{
		ft_terminate_lsthndl(lsthndl);
		ft_myexit(OK_MSG, EXIT_SUCCESS, STDOUT_FILENO);
	}
	else
	{
		ft_terminate_lsthndl(lsthndl);
		ft_myexit(KO_MSG, EXIT_SUCCESS, STDOUT_FILENO);
	}
}
