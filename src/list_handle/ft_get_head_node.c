/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_head_node.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:05:38 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/03 10:47:53 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"

t_cdlst	*ft_get_head_node(t_cdlst *dammy)
{
	return (dammy->next);
}
