/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:45:40 by hemottu           #+#    #+#             */
/*   Updated: 2023/06/01 19:11:12 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_cost_chunk(t_stack *a, t_stack *b, int chunk)
{
	int	i;

	b->cost = malloc(sizeof(int) * chunk);
	ft_init_cost_stack(a);
	if (!b->cost)
		return ;
	if (b->size < chunk * 2)
		ft_init_cost_stack(b);
	else
	{
		i = 0;
		while (i < chunk)
		{
			b->cost[i] = i;
			i++;
		}
	}
	ft_init_pos(a, b, chunk);
	i = 0;
	while (i < chunk)
	{
		b->cost[i] = b->cost[i] + a->cost[b->pos[i]];
		i++;
	}
}

void	ft_sort_by_chunk(t_stack *a, t_stack *b, int chunk)
{
	int	small;

	while (b->size > chunk)
	{
		ft_init_cost_chunk(a, b, chunk);
		small = ft_is_smaller(b->cost, chunk);
		if (b->pos[small] == 0)
			ft_push_smaller_to_a(a, b, small);
		else if (b->pos[small] <= a->size / 2)
		{
			ft_ra_x_amount(a, a->cost[b->pos[small]]);
			ft_push_smaller_to_a(a, b, small);
		}
		else if (b->pos[small] > a->size / 2)
		{
			ft_rra_x_amount(a, a->cost[b->pos[small]]);
			ft_push_smaller_to_a(a, b, small);
		}
		free(a->cost);
		free(b->cost);
		free(b->pos);
	}
	ft_is_sorted(a);
}

void	ft_sort_big(t_stack *a, t_stack *b, int ac)
{
	int	chunk;
	int	i;
	int	start;

	chunk = ac / 3;
	start = 0;
	i = 1;
	while (start < ac - chunk)
	{
		while (b->size < chunk * i && a->size > 3)
		{
			if (a->stack[a->size - 1] >= start
				&& a->stack[a->size - 1] <= chunk * i)
				ft_pb(a, b);
			else
				ft_ra(a);
		}
		i++;
		start = start + chunk;
	}
	ft_sort_3(a);
	ft_sort_by_cost(a, b);
}
