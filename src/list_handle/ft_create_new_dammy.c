/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_new_dammy.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 21:31:41 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/01 20:15:52 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"

t_cdlst	*ft_create_new_dammy(void)
{
	t_cdlst	*node;

	node = (t_cdlst *)malloc(sizeof(t_cdlst));
	if (node == NULL)
		return (NULL);
	node->sorted_flg = -2;
	node->index = 0;
	node->next = node;
	node->prev = node;
	return (node);
}
