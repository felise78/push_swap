/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:45:28 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/27 14:23:09 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_pa(t_stack *a, t_stack *b)
{
	int i;
	
	i = a->size;
	while(i > 0)
	{
		a->stack[i] = a->stack[i - 1];
		i--;
	}
	a->stack[0] = b->stack[0];
	a->size++;
	b->size--;
	while(i < b->size)
	{
		b->stack[i] = b->stack[i + 1];
		i++;
	}
	b->stack[i] = 0;
	ft_printf("pa\n");
}

void ft_pb(t_stack *a, t_stack *b)
{
	int i;
	
	i = b->size;
	while(i > 0)
	{
		b->stack[i] = b->stack[i - 1];
		i--;
	}
	b->stack[0] = a->stack[0];
	a->size--;
	b->size++;
	while(i < a->size)
	{
		a->stack[i] = a->stack[i + 1];
		i++;
	}
	a->stack[i] = 0;
	ft_printf("pb\n");
}


