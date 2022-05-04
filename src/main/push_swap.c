/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:44:47 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/23 12:53:49 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"
#include "push_swap_main.h"

int	main(int argc, char **argv)
{
	t_lsthndl	lsthndl;

	ft_start_up_task(argc, argv, &lsthndl);
	ft_sort(&lsthndl);
	ft_refactor(&lsthndl);
	ft_print_operation(&lsthndl);
	ft_terminate_lsthndl(&lsthndl);
	return (0);
}
