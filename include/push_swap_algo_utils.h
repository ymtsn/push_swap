/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo_utils.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:32:25 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/21 08:42:17 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_ALGO_UTILS_H
# define PUSH_SWAP_ALGO_UTILS_H
# define NOT_PUSHED_B_YET 0
# define SORTED -1
# define THIS_IS_DAMMY_NODE -2
size_t	ft_get_least_index(t_cdlst *target_a, t_cdlst *target_b);
size_t	ft_get_biggest_index(t_cdlst *target_a, t_cdlst *target_b);
void	ft_move_a_node_to_b_top(t_lsthndl *hndl, t_cdlst *node, size_t index);
void	ft_move_b_node_to_a_top(t_lsthndl *lsthndl, t_cdlst *target_node);
void	ft_move_b_node_to_a_bottom(t_lsthndl *lsthndl, t_cdlst *target_node);
void	ft_move_smallest_b_node_to_a_bottom(t_lsthndl *lsthndl);
void	ft_move_smallest_a_node_to_a_bottom(t_lsthndl *lsthndl);
void	ft_refactor_operation_result(t_lsthndl *lsthndl);
t_cdlst	*ft_search_by_index(t_cdlst *dmy, size_t index);
t_cdlst	*ft_search_less_than_pivot(t_cdlst *dmy, size_t pivot, t_cdlst *btm);
t_cdlst	*ft_search_bigger_than_pivot(t_cdlst *dmy, size_t pivot, t_cdlst *btm);
int		ft_is_next_smallest_node(t_lsthndl *lsthndl, t_cdlst *target);
size_t	ft_get_pivot_by_index(t_cdlst *target_a, t_cdlst *target_b);
void	ft_sort_stacka_six_or_less_node(t_lsthndl *lsthndl, size_t count);
void	ft_sort_stackb_six_or_less_node(t_lsthndl *lsthndl, size_t count);
#endif
