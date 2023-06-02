/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:46:17 by hemottu           #+#    #+#             */
/*   Updated: 2023/06/01 18:28:27 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_in_order(int *a, int size, int start)
{
	int	*sorted;
	int	i;

	i = 0;
	sorted = ft_sorted_tab(a, size);
	while (i < size)
	{
		if (a[start] != sorted[i])
		{
			free(sorted);
			return (0);
		}
		if (start == 0)
			start = size - 1;
		else
			start--;
		i++;
	}
	free(sorted);
	return (1);
}

void	ft_is_sorted(t_stack *a)
{
	int	start;

	start = ft_is_smaller(a->stack, a->size);
	if (!ft_is_in_order(a->stack, a->size, start))
		ft_putstr_fd("Error\n", 2);
	if (start == a->size - 1)
		return ;
	else if (start <= a->size / 2)
		ft_rra_x_amount(a, start + 1);
	else
		ft_ra_x_amount(a, a->size - 1 - start);
}
