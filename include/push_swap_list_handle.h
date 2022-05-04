/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_list_handle.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:37:12 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/23 12:49:19 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_LIST_HANDLE_H
# define PUSH_SWAP_LIST_HANDLE_H
# include <stdio.h>
# include <stdlib.h>
# define PUSH_SUCCESS 0
# define PUSH_FAIL 1
# define RECORD_SUCCESS 0
# define RECORD_FAIL 1
typedef struct s_cdlst{
	int				data;
	int				sorted_flg;
	size_t			index;
	struct s_cdlst	*prev;
	struct s_cdlst	*next;
}t_cdlst;
typedef struct s_lsthndl{
	t_cdlst	*dammy_a;
	t_cdlst	*dammy_b;
	t_cdlst	*record_dammy;
	t_cdlst	*checker_dammy;
	char	operation_name[11][5];
}t_lsthndl;
/* circular doubly linked list */
void	ft_add_node_to_list_head(t_cdlst *newnode, t_cdlst *dammy);
void	ft_add_node_to_list_end(t_cdlst *newnode, t_cdlst *dammy);
size_t	ft_count_node_till_end(t_cdlst *dammy);
size_t	ft_count_node_to_node_by_next(t_cdlst *node_a, t_cdlst *node_b);
size_t	ft_count_node_to_node_by_prev(t_cdlst *node_a, t_cdlst *node_b);
t_cdlst	*ft_create_new_node(int data_want_to_add);
t_cdlst	*ft_create_new_dammy(void);
void	ft_delete_node(t_cdlst *target_node);
void	ft_delete_head_node(t_cdlst *dammy);
void	ft_delete_tail_node(t_cdlst *dammy);
void	ft_delete_node_link(t_cdlst *target_node);
t_cdlst	*ft_get_last_node(t_cdlst *dammy);
t_cdlst	*ft_get_head_node(t_cdlst *dammy);
int		ft_is_empty_list(t_cdlst *dammy);
int		ft_is_only_one_node(t_cdlst *dammy);
int		ft_push_arg_to_list(int argc, char *argv[], t_cdlst *dammy);
void	ft_print_operation(t_lsthndl *lsthndl);
void	ft_operation_name_array_init(t_lsthndl *lsthndl);
void	ft_print_list_from_head(t_cdlst *dammy);
void	ft_print_list_from_end(t_cdlst *dammy);
void	ft_record_operation(t_lsthndl *lsthndl, int stack_operator);
void	ft_set_index(t_lsthndl *lsthndl);
void	ft_swap_node(t_cdlst *node_a, t_cdlst *node_b);
void	ft_terminate_node(t_cdlst *dammy);
void	ft_terminate_list(t_cdlst *dammy);
void	ft_terminate_lsthndl(t_lsthndl *lsthndl);
#endif
