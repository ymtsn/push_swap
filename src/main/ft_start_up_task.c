/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_up_task.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 06:41:37 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/24 11:13:09 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap_list_handle.h"
#include "push_swap_error_handle.h"
#include "push_swap_stack_operator.h"
#include "push_swap_algo_utils.h"
#include "push_swap_main.h"

static void	ft_validiate_load_data(t_lsthndl *lsthndl)
{
	if (ft_check_duplicate_number(lsthndl->dammy_a))
	{
		ft_terminate_lsthndl(lsthndl);
		ft_myexit(ERR_MSG, EXIT_FAILURE, STDERR_FILENO);
	}
	if (ft_check_sorted(lsthndl->dammy_a))
	{
		ft_terminate_lsthndl(lsthndl);
		ft_myexit(NULL, EXIT_SUCCESS, STDOUT_FILENO);
	}
	ft_set_index(lsthndl);
}

static void	ft_load_argv(int argc, char **argv, t_lsthndl *lsthndl)
{
	int	push_result;

	push_result = ft_push_arg_to_list(argc, argv, lsthndl->dammy_a);
	if (push_result == PUSH_FAIL)
	{
		ft_terminate_lsthndl(lsthndl);
		ft_myexit(ERR_MSG, EXIT_FAILURE, STDERR_FILENO);
	}
}

static void	ft_init_data(t_lsthndl *lsthndl)
{
	ft_bzero(lsthndl, sizeof(t_lsthndl));
	lsthndl->dammy_a = NULL;
	lsthndl->dammy_b = NULL;
	lsthndl->record_dammy = NULL;
	lsthndl->checker_dammy = NULL;
	lsthndl->dammy_a = ft_create_new_dammy();
	lsthndl->dammy_b = ft_create_new_dammy();
	if (lsthndl->dammy_a == NULL || lsthndl->dammy_b == NULL)
	{
		ft_terminate_lsthndl(lsthndl);
		ft_myexit(ERR_MSG, EXIT_FAILURE, STDERR_FILENO);
	}
	lsthndl->record_dammy = ft_create_new_dammy();
	if (lsthndl->record_dammy == NULL)
	{
		ft_terminate_lsthndl(lsthndl);
		ft_myexit(ERR_MSG, EXIT_FAILURE, STDERR_FILENO);
	}
	ft_operation_name_array_init(lsthndl);
}

static void	ft_validiate_argv(int argc, char **argv)
{
	if (argc == 1)
		exit(EXIT_SUCCESS);
	if (ft_check_not_number(argc, argv))
		ft_myexit(ERR_MSG, EXIT_FAILURE, STDERR_FILENO);
	if (ft_check_bigger_than_int(argc, argv))
		ft_myexit(ERR_MSG, EXIT_FAILURE, STDERR_FILENO);
}

void	ft_start_up_task(int argc, char **argv, t_lsthndl *lsthndl)
{
	ft_validiate_argv(argc, argv);
	ft_init_data(lsthndl);
	ft_load_argv(argc, argv, lsthndl);
	ft_validiate_load_data(lsthndl);
}
