/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_load_stdin_operation.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:45:40 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/21 22:34:50 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line_bonus.h"
#include "push_swap_list_handle_bonus.h"
#include "push_swap_error_handle_bonus.h"
#include "push_swap_stack_operator_bonus.h"
#define INVALID_OPERATION -1
#define FINISH_READ_OPERATION -2
#define FAIL_LOAD_OPERATION -3
#define SUCCESS_LOAD_OPERATION -4

int	ft_load_operation(t_lsthndl *lsthndl, int operation_number)
{
	t_cdlst	*newnode;
	t_cdlst	*dammy;

	dammy = lsthndl->checker_dammy;
	newnode = ft_create_new_node(operation_number);
	if (newnode != NULL)
		ft_add_node_to_list_end(newnode, dammy);
	else
		return (FAIL_LOAD_OPERATION);
	return (SUCCESS_LOAD_OPERATION);
}

int	ft_decode_str_to_operation_number(t_lsthndl *lsthndl, char *buf)
{
	int	i;

	i = 0;
	while (i < 11)
	{
		if (!ft_strncmp(buf, lsthndl->operation_name[i], 4))
			return (i);
		i++;
	}
	return (INVALID_OPERATION);
}

int	ft_read_operation(t_lsthndl *lsthndl)
{
	char	*buf;
	int		operation_number;

	buf = get_next_line(0);
	if (buf == NULL)
		return (FINISH_READ_OPERATION);
	operation_number = ft_decode_str_to_operation_number(lsthndl, buf);
	free(buf);
	if (operation_number == INVALID_OPERATION)
		return (INVALID_OPERATION);
	return (operation_number);
}

void	ft_read_load_stdin_operation(t_lsthndl *lsthndl)
{
	int		read_result;
	int		load_result;

	while (1)
	{
		read_result = ft_read_operation(lsthndl);
		if (read_result == INVALID_OPERATION)
			ft_myexit(ERR_MSG, EXIT_FAILURE, STDERR_FILENO);
		else if (read_result == FINISH_READ_OPERATION)
			return ;
		load_result = ft_load_operation(lsthndl, read_result);
		if (load_result == FAIL_LOAD_OPERATION)
			ft_myexit(ERR_MSG, EXIT_FAILURE, STDERR_FILENO);
	}
}
