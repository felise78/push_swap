/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:36:27 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/19 16:03:59 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(int *a, int ac)
{
	int temp;

	ac -= 1;
	temp = a[ac];
	while (ac > 0)
	{
		a[ac] = a[ac - 1];
		ac--;
	}
	a[0] = temp;
	ft_printf("rra\n");
}

void	ft_rrb(int *b, int ac)
{
	int temp;

	ac -= 1;
	temp = b[ac];
	while (ac > 0)
	{
		b[ac] = b[ac - 1];
		ac--;
	}
	b[0] = temp;
	ft_printf("rrb\n");
}