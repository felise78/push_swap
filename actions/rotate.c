/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:34:10 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/19 16:04:08 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_ra(int *a, int ac)
{
	int temp;
	int i;

	i = 0;
	temp = a[0];
	while(i < ac - 1)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[i] = temp;
	ft_printf("ra\n");
}

void ft_rb(int *b, int ac)
{
	int temp;
	int i;

	i = 0;
	temp = b[0];
	while(i < ac - 1)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[i] = temp;
	ft_printf("rb\n");
}