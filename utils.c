/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:31:37 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/27 16:58:16 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_ra_x_amount(t_stack *a, t_stack *b, int x)
{
    int i;

    i = 0;
    while (i < a->cost[b->pos[x]])
    {
        ft_ra(a->stack, a->size);
        i++;
    }
}

void    ft_rra_x_amount(t_stack *a, t_stack *b, int x)
{
    int i;

    i = 0;
    while (i < a->cost[b->pos[x]])
    {
        ft_rra(a->stack, a->size);
        i++;
    }
}

int ft_get_mediane(int *a, int ac)
{
	int *copy;
	int i = 0;
	int mediane;

	copy = ft_copytab(a->stack, ac);
	sort_int_tab(copy, ac);
	mediane = copy[ac/ 2];
	free(copy);
	return(mediane);
}
// je suis pas sure du while i <  // ca devrait peut etre aller dans l'autre sens
