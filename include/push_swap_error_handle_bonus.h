/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_error_handle_bonus.h                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:35:42 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/04/23 21:26:09 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_ERROR_HANDLE_BONUS_H
# define PUSH_SWAP_ERROR_HANDLE_BONUS_H
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# define ERR_MSG "Error\n"
# define KO_MSG "KO\n"
# define OK_MSG "OK\n"
# define INVALID 1
# define VALID 0
int		ft_check_duplicate_number(t_cdlst *dammy);
int		ft_check_sorted(t_cdlst *dammy);
int		ft_check_not_number(int argc, char **argv);
int		ft_check_bigger_than_int(int argc, char **argv);
void	ft_myexit(char *msg, int exitcd, int output_filenumber);
#endif
