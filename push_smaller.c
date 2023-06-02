/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_smaller.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 19:01:22 by hemottu           #+#    #+#             */
/*   Updated: 2023/06/01 19:04:28 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_smaller(int *stack, int size)
{
	int	i;
	int	*sorted;

	sorted = ft_copytab(stack, size);
	sort_int_tab(sorted, size);
	i = 0;
	while (i < size && stack[i] != sorted[0])
		i++;
	free(sorted);
	return (i);
}

void	ft_push_smaller_to_a(t_stack *a, t_stack *b, int small)
{
	int	i;

	if (small >= (b->size / 2))
	{
		i = small;
		while (i < b->size - 1)
		{
			ft_rb(b);
			i++;
		}
		ft_pa(a, b);
	}
	else
	{
		i = small;
		while (i >= 0)
		{
			ft_rrb(b);
			i--;
		}
		ft_pa(a, b);
	}
}
