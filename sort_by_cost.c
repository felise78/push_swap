/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_by_cost.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:45:20 by hemottu           #+#    #+#             */
/*   Updated: 2023/06/01 19:18:25 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_place(t_stack *a, int b)
{
	int	small;
	int	big;

	small = ft_is_smaller(a->stack, a->size);
	if (small != a->size - 1)
		big = small + 1;
	else
		big = 0;
	if (b < a->stack[small])
		return (small);
	else if (b > a->stack[big])
	{
		if (big == 0)
			return (a->size - 1);
		else
			return (big - 1);
	}
	while (b > a->stack[small])
	{
		if (small == 0)
			small = a->size;
		small--;
	}
	return (small);
}

void	ft_init_pos(t_stack *a, t_stack *b, int size)
{
	int	i;

	i = 0;
	b->pos = malloc(sizeof(int) * size);
	if (!b->pos)
		return ;
	while (i < size)
	{
		b->pos[i] = ft_is_place(a, b->stack[i]);
		i++;
	}
}

void	ft_init_cost_stack(t_stack *stack)
{
	int	middle;
	int	i;
	int	j;

	stack->cost = malloc(sizeof(int) * stack->size);
	if (!stack->cost)
		return ;
	middle = stack->size / 2;
	i = stack->size - 1;
	while (i >= middle)
	{
		stack->cost[i] = stack->size - 1 - i;
		i--;
	}
	i = 0;
	j = 1;
	while (i < middle)
	{
		stack->cost[i] = j;
		i++;
		j++;
	}
}

void	ft_init_costs(t_stack *a, t_stack *b)
{
	int	i;

	ft_init_pos(a, b, b->size);
	ft_init_cost_stack(a);
	ft_init_cost_stack(b);
	i = b->size - 1;
	while (i >= 0)
	{
		b->cost[i] = b->cost[i] + a->cost[b->pos[i]];
		i--;
	}
}

void	ft_sort_by_cost(t_stack *a, t_stack *b)
{
	int	smaller_cost;

	while (b->size)
	{
		ft_init_costs(a, b);
		smaller_cost = ft_is_smaller(b->cost, b->size);
		if (b->pos[smaller_cost] == a->size - 1)
			ft_push_smaller_to_a(a, b, smaller_cost);
		else if (b->pos[smaller_cost] < a->size / 2)
		{
			ft_rra_x_amount(a, a->cost[b->pos[smaller_cost]]);
			ft_push_smaller_to_a(a, b, smaller_cost);
		}
		else if (b->pos[smaller_cost] >= a->size / 2)
		{
			ft_ra_x_amount(a, a->cost[b->pos[smaller_cost]]);
			ft_push_smaller_to_a(a, b, smaller_cost);
		}
		free(a->cost);
		free(b->cost);
		free(b->pos);
	}
	ft_is_sorted(a);
}
