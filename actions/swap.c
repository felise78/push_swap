/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:48:29 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/19 16:01:07 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(int *a)
{
	int temp;

	temp = a[0];
	a[0] = a[1];
	a[1] = temp;
	ft_printf("sa\n");
}

void	ft_sb(int *b)
{
	int temp;

	temp = b[0];
	b[0] = b[1];
	b[1] = temp;
	ft_printf("sb\n");
}