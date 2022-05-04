/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_myexit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 00:15:09 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/21 21:33:37 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle_bonus.h"
#include "push_swap_error_handle_bonus.h"
#include "libft.h"

void	ft_myexit(char *msg, int exitcd, int output_filenumber)
{
	if (msg != NULL)
		ft_putstr_fd(msg, output_filenumber);
	exit(exitcd);
}
