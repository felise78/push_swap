/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:36:27 by hemottu           #+#    #+#             */
/*   Updated: 2023/06/01 18:46:59 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_stack *a)
{
	int	temp;
	int	i;

	i = 0;
	temp = a->stack[0];
	while (i < a->size - 1)
	{
		a->stack[i] = a->stack[i + 1];
		i++;
	}
	a->stack[a->size - 1] = temp;
	ft_printf("rra\n");
}

void	ft_rrb(t_stack *b)
{
	int	temp;
	int	i;

	i = 0;
	temp = b->stack[0];
	while (i < b->size)
	{
		b->stack[i] = b->stack[i + 1];
		i++;
	}
	b->stack[b->size - 1] = temp;
	ft_printf("rrb\n");
}

// void	ft_rrr(t_stack *a, t_stack *b)
// {
// 	int temp;
// 	int ac;

// 	ac = a->size - 1;
// 	temp = a->stack[ac];
// 	while (ac > 0)
// 	{
// 		a->stack[ac] = a->stack[ac - 1];
// 		ac--;
// 	}
// 	a->stack[0] = temp;
// 	ac = b->size - 1;
// 	temp = b->stack[ac];
// 	while (ac > 0)
// 	{
// 		b->stack[ac] = b->stack[ac - 1];
// 		ac--;
// 	}
// 	b->stack[0] = temp;
// 	ft_printf("rrr\n");
// }