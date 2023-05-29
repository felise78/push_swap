/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:31:37 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/29 14:20:12 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_ra_x_amount(t_stack *a, int x)
{
    int i;

    i = 0;
    while (i < x)
    {
        ft_ra(a->stack, a->size);
        i++;
    }
}

void    ft_rra_x_amount(t_stack *a, int x)
{
    int i;

    i = 0;
    while (i < x)
    {
        ft_rra(a->stack, a->size);
        i++;
    }
}

int ft_get_mediane(int *a, int ac)
{
	int *copy;
	int mediane;

	copy = ft_sorted_tab(a, ac);
	mediane = copy[ac/ 2];
	free(copy);
	return(mediane);
}

int    *ft_sorted_tab(int *tab, int size)
{
    int *sorted_tab;
    
    sorted_tab = ft_copytab(tab, size);
    sort_int_tab(sorted_tab, size);
    return (sorted_tab);
}

int     ft_is_in_range(int *tab, int start, int end, int nb)
{
    while (start < end)
    {
        if (tab[start] == nb)
            return (1);
        start++;
    }
    return (0);
}