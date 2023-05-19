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

// void	ft_sb(t_stack *stack)
// {
// 	int temp;

// 	temp = data->b[0];
// 	data->b[0] = data->b[1];
// 	data->b[1] = temp;
// 	ft_printf("sb\n");
// }

// void	ft_ss(t_stack *stack)
// {
// 	int temp;

// 	temp = data->a[0];
// 	data->a[0] = data->a[1];
// 	data->a[1] = temp;
// 	temp = data->b[0];
// 	data->b[0] = data->b[1];
// 	data->b[1] = temp;
// 	ft_printf("ss\n");
// }

// int main (void)
// {
// 	int *a;

// 	a = malloc(sizeof(int) * 3);
// 	a[0] = 1;
// 	a[1] = 2;
// 	a[2] = 3;

// 	int i = 0;
// 	while (i < 3)
// 	{
// 		printf("a[%d] : %d\n", i, a[i]);
// 		i++;
// 	}
// 	ft_sa(a);
// 	i = 0;
// 	while (i < 3)
// 	{
// 		printf("a[%d] : %d\n", i, a[i]);
// 		i++;
// 	}
// }