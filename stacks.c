/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:17:41 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/19 15:50:47 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_put_in_A(int ac, char **av, t_stack *stack)
{
	int i;
	int j;

	j = 1;
	stack->a = malloc(sizeof(int) * ac);
	stack->b = malloc(sizeof(int) * ac);
	if(!stack->a || !stack->b)
	{
		free(stack->a);
		free(stack->b);
		ft_put_error("Error\nThe stacks could not be created\n");
		return (0);
	}
	i = 0;	
	while (av[j])
	{
		stack->a[i] = ft_atoi(av[j]);
		i++;
		j++;
	}
	return(1);
}
