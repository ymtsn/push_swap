/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_arg_to_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:49:47 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/03 12:08:32 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"
#include "libft.h"

static int	ft_push_one_arg_to_list(char **argv, t_cdlst *dammy)
{
	t_cdlst	*newnode;

	while (**(argv + 1))
	{
		newnode = ft_create_new_node(ft_atoi_skip(&(*(argv + 1))));
		if (newnode != NULL)
			ft_add_node_to_list_end(newnode, dammy);
		else
			return (PUSH_FAIL);
	}
	return (PUSH_SUCCESS);
}

static int	ft_push_multi_arg_to_list(int argc, char **argv, t_cdlst *dammy)
{
	int		i;
	t_cdlst	*newnode;

	i = 1;
	while (argc != i)
	{
		newnode = ft_create_new_node(ft_atoi(argv[i]));
		if (newnode != NULL)
			ft_add_node_to_list_end(newnode, dammy);
		else
			return (PUSH_FAIL);
		i++;
	}
	return (PUSH_SUCCESS);
}

int	ft_push_arg_to_list(int argc, char **argv, t_cdlst *dammy)
{
	if (argc == 2)
		return (ft_push_one_arg_to_list(argv, dammy));
	return (ft_push_multi_arg_to_list(argc, argv, dammy));
}
