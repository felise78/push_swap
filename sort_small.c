/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:42:55 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/20 23:11:43 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort_3(int *a, int ac)
{
	if(ac == 2)
	{
		if (a[0] > a[1])
			ft_sa(a);
	}
	else if (ac == 3)
	{
		 if(a[0] > a[1] && a[0] > a[2])
		{
			ft_ra(a, ac);
			if(a[0] > a[1])
				ft_sa(a);
		}
		else if(a[0] < a[1] && a[0] > a[2])
			ft_rra(a, ac);
		else if (a[0] > a[1] && a[0] < a[2])
			ft_sa(a);
		else if (a[0] < a[1] && a[1] > a[2])
		{	
			ft_sa(a);
			ft_ra(a, ac);
		}
	}
}

// void	ft_insert_from_b(t_stack *stack)
// {
// 	int i;
	
// 	i = stack->nba - 1;
// 	while (i > 0)
// 	{
// 		if (stack->b[0] < stack->a[0])
// 			ft_pa(stack);
// 		else
// 			ft_ra(stack->a, stack->nba);
// 		i--;
// 	}
// }

void	ft_sort_5(t_stack *stack, int ac)
{
	if (ac == 4)
	{
		ft_pb(stack);
		ft_sort_3(stack->a, 3);
		//ft_insert_from_b(stack);
	}
	else if (ac == 5)
	{
		ft_pb(stack);
		ft_pb(stack);
		ft_sort_3(stack->a, 3);
	}
}