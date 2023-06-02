/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:34:10 by hemottu           #+#    #+#             */
/*   Updated: 2023/06/01 18:46:44 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_stack *a)
{
	int	temp;
	int	i;

	i = 1;
	temp = a->stack[a->size - i];
	while (a->size - i > 0)
	{
		a->stack[a->size - i] = a->stack[a->size - i - 1];
		i++;
	}
	a->stack[0] = temp;
	ft_printf("ra\n");
}

void	ft_rb(t_stack *b)
{
	int	temp;
	int	i;

	i = 1;
	temp = b->stack[b->size - i];
	while (b->size - i > 0)
	{
		b->stack[b->size - i] = b->stack[b->size - i - 1];
		i++;
	}
	b->stack[0] = temp;
	ft_printf("rb\n");
}
