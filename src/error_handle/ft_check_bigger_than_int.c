/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_bigger_than_int.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:07:54 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/24 11:09:56 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"
#include "push_swap_error_handle.h"
#include "libft.h"
#define MINUS 1
#define PLUS 0
#define BIGGER_THAN_INT 1
#define NOT_BIGGER_THAN_INT 0

static int	ft_check_one_arg_bigger_than_int_main_job(char **str)
{
	size_t	buf;
	int		sign_flg;

	while (('\t' <= **str && **str <= '\r') || **str == ' ')
		(void)(*str)++;
	sign_flg = PLUS;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign_flg = MINUS;
		(void)(*str)++;
	}
	if (!ft_isdigit(**str))
		ft_myexit(ERR_MSG, EXIT_FAILURE, STDERR_FILENO);
	buf = 0;
	while (ft_isdigit(**str))
		buf = buf * 10 + (*(*str)++ - '0');
	if (**str && !(('\t' <= **str && **str <= '\r') || **str == ' '))
		ft_myexit(ERR_MSG, EXIT_FAILURE, STDERR_FILENO);
	if (buf && sign_flg == PLUS && buf > INT_MAX)
		return (BIGGER_THAN_INT);
	if (buf && sign_flg == MINUS && (buf - 1) > INT_MAX)
		return (BIGGER_THAN_INT);
	return (NOT_BIGGER_THAN_INT);
}

static int	ft_check_multi_arg_bigger_than_int_main_job(char *str)
{
	size_t	buf;
	int		sign_flg;

	while (('\t' <= *str && *str <= '\r') || *str == ' ')
		str++;
	sign_flg = PLUS;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign_flg = MINUS;
		str++;
	}
	if (!ft_isdigit(*str))
		ft_myexit(ERR_MSG, EXIT_FAILURE, STDERR_FILENO);
	buf = 0;
	while (ft_isdigit(*str))
		buf = buf * 10 + (*str++ - '0');
	if (*str)
		ft_myexit(ERR_MSG, EXIT_FAILURE, STDERR_FILENO);
	if (buf && sign_flg == PLUS && buf > INT_MAX)
		return (BIGGER_THAN_INT);
	if (buf && sign_flg == MINUS && (buf - 1) > INT_MAX)
		return (BIGGER_THAN_INT);
	return (NOT_BIGGER_THAN_INT);
}

int	ft_check_one_arg_bigger_than_int(char **argv)
{
	char	*str_buf;

	str_buf = *(argv + 1);
	while (*str_buf)
	{
		if (ft_check_one_arg_bigger_than_int_main_job(&str_buf))
			return (INVALID);
	}
	return (VALID);
}

int	ft_check_multi_arg_bigger_than_int(int argc, char **argv)
{
	int		i;

	i = 0;
	while (argc != i + 1)
	{
		if (ft_check_multi_arg_bigger_than_int_main_job(*(argv + i + 1)))
			return (INVALID);
		i++;
	}
	return (VALID);
}

int	ft_check_bigger_than_int(int argc, char **argv)
{
	if (argc == 2)
		return (ft_check_one_arg_bigger_than_int(argv));
	return (ft_check_multi_arg_bigger_than_int(argc, argv));
}
