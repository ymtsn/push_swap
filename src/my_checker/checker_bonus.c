/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:31:34 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/23 12:53:54 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle_bonus.h"
#include "push_swap_my_checker_bonus.h"

int	main(int argc, char **argv)
{
	t_lsthndl	lsthndl;

	ft_start_up_task_checker(argc, argv, &lsthndl);
	ft_read_load_stdin_operation(&lsthndl);
	ft_symulate_operation(&lsthndl);
	ft_print_check_result(&lsthndl);
	ft_terminate_lsthndl(&lsthndl);
	return (0);
}
