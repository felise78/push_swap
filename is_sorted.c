/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:46:17 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/27 20:32:42 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_is_in_order(int *a, int size, int start)
{
	int *sorted;
	int i;

	i = 0;
	sorted = ft_copytab(a, size);
	sort_int_tab(sorted, size);
	while (i < size)
	{
		if (a[start] != sorted[i])
		{
			free(sorted);
			return(0);
		}
		if (start == size - 1)
			start = 0;
		else
			start++;	
		i++;
	}
	free(sorted);
	return (1);
}

void ft_is_sorted(t_stack *a)
{
    int start;
	
    start = ft_is_smaller(a->stack, a->size);
	if (!ft_is_in_order(a->stack, a->size, start))
		return ;
    ft_init_cost(a);
    if (start == 0)
        return ;
    else if (start <= a->size / 2)
    {
        while (a->cost[start])
        {
            ft_ra(a->stack, a->size);
            a->cost[start]--;
        }
    }
    else
    {   
        while (a->cost[start])
        {
            ft_rra(a->stack, a->size);
            a->cost[start]--;
        }
    }
}