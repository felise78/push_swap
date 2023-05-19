/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:40:08 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/19 16:04:07 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "Libft/libft.h"

typedef	struct s_stack
{
	int	*a;
	int	*b;
}			t_stack;


void 	ft_put_error(char *str);
int		ft_put_in_A(int ac, char **av, t_stack *stack);
int     ft_parse(char **av);
int     ft_check_digits(char *str);
int		ft_check_doubles(int *a, int ac);
void	ft_sort_3(int *a, int ac);
void	ft_sa(int *a);
void	ft_ra(int *a, int ac);
void	ft_rra(int *a, int ac);

#endif
