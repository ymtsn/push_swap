/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_terminate_checker_list.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:38:35 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/23 12:34:17 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"

void	ft_terminate_lsthndl(t_lsthndl *lsthndl)
{
	ft_terminate_list(lsthndl->dammy_a);
	ft_terminate_list(lsthndl->dammy_b);
	ft_terminate_list(lsthndl->record_dammy);
	ft_terminate_list(lsthndl->checker_dammy);
}
