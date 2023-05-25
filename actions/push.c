/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:45:28 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/25 12:42:57 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_pa(t_stack *stack)
{
	int i;
	
	i = stack->nba - 1;
	while(i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[0] = stack->b[0];
	stack->nba++;
	stack->nbb--;
	while(i < stack->nbb)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[i] = 0;
	ft_printf("pa\n");
}

void ft_pb(t_stack *stack)
{
	int i;
	
	i = stack->nbb;
	while(i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[0] = stack->a[0];
	stack->nba--;
	stack->nbb++;
	while(i < stack->nba)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[i] = 0;
	ft_printf("pb\n");
}
