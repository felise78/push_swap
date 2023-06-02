/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:45:28 by hemottu           #+#    #+#             */
/*   Updated: 2023/06/01 17:51:39 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pa(t_stack *a, t_stack *b)
{
	if (b->size == 0)
		return ;
	b->size--;
	a->stack[a->size] = b->stack[b->size];
	b->stack[b->size] = 0;
	a->size++;
	ft_printf("pa\n");
}

void	ft_pb(t_stack *a, t_stack *b)
{
	if (a->size == 0)
		return ;
	a->size--;
	b->stack[b->size] = a->stack[a->size];
	a->stack[a->size] = 0;
	b->size++;
	ft_printf("pb\n");
}
