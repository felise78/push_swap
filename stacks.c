/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:17:41 by hemottu           #+#    #+#             */
/*   Updated: 2023/06/01 19:22:32 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_init_stacks(int ac, char **av, t_stack *a, t_stack *b)
{
	int	i;

	a->size = ac;
	b->size = 0;
	a->stack = malloc(sizeof(int) * ac);
	if (!a->stack)
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	b->stack = malloc(sizeof(int) * ac);
	if (!b->stack)
	{
		free(a->stack);
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	i = 1;
	while (av[i])
	{
		a->stack[ac - 1] = ft_atoi(av[i]);
		i++;
		ac--;
	}
	return (1);
}
