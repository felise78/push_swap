/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:42:55 by hemottu           #+#    #+#             */
/*   Updated: 2023/06/01 19:21:58 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_3(t_stack *a)
{
	if (a->size == 2)
	{
		if (a->stack[0] < a->stack[1])
			ft_sa(a);
	}
	else if (a->size == 3)
	{
		if (a->stack[0] < a->stack[1] && a->stack[2] > a->stack[1])
		{
			ft_sa(a);
			ft_rra(a);
		}
		else if (a->stack[0] < a->stack[1] && a->stack[2] < a->stack[1])
		{
			ft_rra(a);
			if (a->stack[2] > a->stack[1])
				ft_sa(a);
		}
		else if (a->stack[0] > a->stack[2] && a->stack[2] > a->stack[1])
			ft_sa(a);
		else if (a->stack[2] > a->stack[1] && a->stack[1] < a->stack[0])
			ft_ra(a);
	}
}

void	ft_sort_small(t_stack *a, t_stack *b)
{
	while (a->size > 3)
		ft_pb(a, b);
	ft_sort_3(a);
	ft_sort_by_cost(a, b);
	ft_is_sorted(a);
}
