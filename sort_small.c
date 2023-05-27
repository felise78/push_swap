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

void	ft_sort_4(t_stack *a, t_stack *b)
{
	if (b->stack[0] < a->stack[0])
		ft_pa(a, b);
	else if (b->stack[0] > a->stack[2])
	{
		ft_pa(a, b);
		ft_ra(a->stack, a->size);
	}
	else if(b->stack[0] > a->stack[0] && b->stack[0] < a->stack[1])
	{
		ft_ra(a->stack, a->size);
		ft_pa(a, b);
		ft_rra(a->stack, a->size);
	}
	else if(b->stack[0] > a->stack[1] && b->stack[0] < a->stack[2])
	{
		ft_rra(a->stack, a->size);
		ft_pa(a, b);
		ft_ra(a->stack, a->size);
		ft_ra(a->stack, a->size);
	}
}

void	ft_sort_5(t_stack *a, t_stack *b, int ac)
{
	if (ac == 4)
	{
		ft_pb(a, b);
		ft_sort_3(a->stack, 3);
		ft_sort_4(a, b);
	}
	else if (ac == 5)
	{
		ft_pb(a, b);
		ft_pb(a, b);
		ft_sort_3(a->stack, 3);
		ft_sort_by_cost(a, b);
		//ft_sort_4(a, b);
		//printf("ou devrait etre b[0] : %d\n", ft_is_place(a, b->stack[0]));
		//printf("ou devrait etre b[1] : %d\n", ft_is_place(a, b->stack[1]));
	}
}