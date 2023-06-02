/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:02:46 by hemottu           #+#    #+#             */
/*   Updated: 2023/06/01 18:05:08 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	transform_stack_to_index(int *a, int size)
{
	int	*sorted;
	int	i;
	int	j;

	i = 0;
	sorted = ft_sorted_tab(a, size);
	while (i < size)
	{
		j = 0;
		while (a[i] != sorted[j])
			j++;
		a[i] = j;
		i++;
	}
	free(sorted);
}
