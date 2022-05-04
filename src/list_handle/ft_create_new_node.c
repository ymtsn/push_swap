/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_new_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 21:31:41 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/20 07:28:46 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_list_handle.h"

t_cdlst	*ft_create_new_node(int data_want_to_add)
{
	t_cdlst	*node;

	node = (t_cdlst *)malloc(sizeof(t_cdlst));
	if (node == NULL)
		return (NULL);
	node->data = data_want_to_add;
	node->sorted_flg = 0;
	node->index = 0;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}
