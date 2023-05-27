/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:40:08 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/27 16:08:29 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "Libft/libft.h"

typedef	struct s_stack
{
	int *stack;
	int size;
	int *cost;
	int *pos;
}				t_stack;

int     ft_parse(char **av);
int		ft_init_stacks(int ac, char **av, t_stack *a, t_stack *b);
int     ft_check_digits(char *str);
int		ft_check_doubles(int *a, int ac);
void	ft_sort_3(int *a, int ac);
void	ft_sa(int *a);
void	ft_ra(int *a, int ac);
void	ft_rb(int *b, int ac);
void	ft_rra(int *a, int ac);
void	ft_rrb(int *b, int ac);
void	ft_sort_5(t_stack *a, t_stack *b, int ac);
void	ft_pa(t_stack *a, t_stack *b);
void	ft_pb(t_stack *a, t_stack *b);
void	ft_sort_by_cost(t_stack *a, t_stack *b);
int		ft_is_smaller(int *stack, int size);
int		ft_is_place(t_stack *a, int b0);
int		ft_get_mediane(int *a, int ac);
void    ft_sort_big(t_stack *a, t_stack *b, int ac);
void    ft_init_cost(t_stack *stack);
void	ft_sort_med(t_stack *a, t_stack *b);
void	ft_init_pos(t_stack *a, t_stack *b);
void    ft_ra_x_amount(t_stack *a, t_stack *b, int x);
void    ft_rra_x_amount(t_stack *a, t_stack *b, int x);
void	ft_is_sorted(t_stack *a);
void	ft_push_smaller(t_stack *a, t_stack *b, int small);


#endif
