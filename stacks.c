/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:17:41 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/29 12:12:50 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_init_stacks(int ac, char **av, t_stack *a, t_stack *b)
{
	int	i;
	int	j;

	j = 1;
	a->stack = malloc(sizeof(int) * ac);
	b->stack = malloc(sizeof(int) * ac);
	if (!a->stack || !b->stack)
	{
		free(a->stack);
		free(b->stack);
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	i = 0;
	while (av[j])
	{
		a->stack[i] = ft_atoi(av[j]);
		i++;
		j++;
	}
	a->size = ac;
	b->size = 0;
	return (1);
}

// void	ft_init_big_stacks(int ac, char **av, t_stack *a, t_stack *b)
// {
// 	int	i;
// 	int	j;

// 	j = 1;
// 	a->stack = malloc(sizeof(int) * (ac * 2));
// 	b->stack = malloc(sizeof(int) * (ac * 2));
// 	if (!a->stack || !b->stack)
// 	{
// 		free(a->stack);
// 		free(b->stack);
// 		ft_putstr_fd("Error\n", 2);
// 		return ;
// 	}
// 	i = ac / 2;
// 	a->start = i;
// 	while (av[j])
// 	{
// 		a->stack[i] = ft_atoi(av[j]);
// 		i++;
// 		j++;
// 	}
// 	a->size = ac;
// 	b->size = 0;
//}

// for a big stack I malloc the double of the stack to be able to copy less 
// and reduce the time of calculation.
// je sauvergarde la position du debut de la stack dans avec a->start