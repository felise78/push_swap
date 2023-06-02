/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:48:29 by hemottu           #+#    #+#             */
/*   Updated: 2023/06/01 17:50:11 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_stack *a)
{
	int	temp;

	if (a->size <= 1)
		return ;
	temp = a->stack[a->size - 1];
	a->stack[a->size - 1] = a->stack[a->size - 2];
	a->stack[a->size - 2] = temp;
	ft_printf("sa\n");
}

void	ft_sb(t_stack *b)
{
	int	temp;

	if (b->size <= 1)
		return ;
	temp = b->stack[b->size - 1];
	b->stack[b->size - 1] = b->stack[b->size - 2];
	b->stack[b->size - 2] = temp;
	ft_printf("sb\n");
}

void	ft_ss(t_stack *a, t_stack *b)
{
	int	temp;

	if (a->size <= 1 || b->size <= 1)
		return ;
	temp = a->stack[0];
	a->stack[0] = a->stack[1];
	a->stack[1] = temp;
	temp = b->stack[0];
	b->stack[0] = b->stack[1];
	b->stack[1] = temp;
	ft_printf("ss\n");
}
