/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_not_number_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:51:37 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/23 21:19:33 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle_bonus.h"
#include "push_swap_error_handle_bonus.h"
#include "libft.h"

int	ft_check_one_arg_not_number(char *argv)
{
	size_t	i;

	i = 0;
	while (*(argv + i) && (ft_strchr("-0123456789 ", *(argv + i)) != NULL))
		i++;
	return (i != ft_strlen(argv));
}

int	ft_check_multi_arg_not_number(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argc != i + 1)
	{
		if (!(*(*(argv + i + 1))))
			return (INVALID);
		if (ft_check_one_arg_not_number(*(argv + i + 1)))
			return (INVALID);
		i++;
	}
	return (VALID);
}

int	ft_check_not_number(int argc, char **argv)
{
	if (argc == 2)
	{
		if (!(*(*(argv + 1))))
			return (INVALID);
		return (ft_check_one_arg_not_number(argv[1]));
	}
	return (ft_check_multi_arg_not_number(argc, argv));
}
