/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_by_cost.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:45:20 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/27 15:34:04 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_init_cost(t_stack *stack) 
{
    int middle;
    int i;
    int j;

    stack->cost = malloc(sizeof(int) * stack->size);
    if (!stack->cost)
        return ;
    middle = stack->size / 2;
    i = 0;
    while(i <= middle)
    {
        stack->cost[i] = i;
        i++;
    }
    i = stack->size - 1;
    j = 1;
    while (i > middle)
    {   
       stack->cost[i] = j;
        i--;
        j++;
    }    
}

void	ft_sort_by_cost(t_stack *a, t_stack *b)
{
    int i;
    int small;

    while (b->size)
    {
        ft_init_cost(a);
        ft_init_cost(b);
        ft_init_pos(a, b);
        i = 0;
        while (i < b->size)
        {
            b->cost[i] = b->cost[i] + a->cost[b->pos[i]];
            i++;
        }
        small = ft_is_smaller(b->cost, b->size);
        if (b->pos[small] == 0)
            ft_push_smaller(a, b, small);
        else if (b->pos[small] <= a->size / 2)
		{
            ft_ra_x_amount(a, b, small);
			ft_pa(a, b);
		}
        else if (b->pos[small] > a->size / 2)
		{
            ft_rra_x_amount(a, b, small);
			ft_pa(a, b);
		}
    }
    ft_is_sorted(a);
}