/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_by_cost.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:45:20 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/29 16:16:20 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_is_place(t_stack *a, int b0)
{
    int i;
    
    i = ft_is_smaller(a->stack, a->size);
    if (b0 < a->stack[i])
        return (i);
    while (i < a->size)
    {
        if (b0 < a->stack[i])
            return(i);
        i++;
    }
    if (ft_is_smaller(a->stack, a->size) != 0)
    {
        i = 0;
        while (i < ft_is_smaller(a->stack, a->size))
        {
            if (b0 < a->stack[i])
                return (i);
            i++;      
        }
    }
    return (i++);
}

void ft_init_pos(t_stack *a, t_stack *b, int size)
{
    int i;

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

void    ft_init_cost_stack(t_stack *stack) 
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

void    ft_init_cost(t_stack *a, t_stack *b)
{
    int i;

    ft_init_pos(a, b, b->size);
    ft_init_cost_stack(a);
    ft_init_cost_stack(b);
    i = 0;
    while (i < b->size)
    {
        b->cost[i] = b->cost[i] + a->cost[b->pos[i]];
        i++;
    }
}

void	ft_sort_by_cost(t_stack *a, t_stack *b)
{
    int small;
    
    while (b->size)
    {
        ft_init_cost(a, b);
        small = ft_is_smaller(b->cost, b->size);
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