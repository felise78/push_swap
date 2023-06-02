/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:39:40 by hemottu           #+#    #+#             */
/*   Updated: 2023/06/01 21:55:33 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stack *a, t_stack *b, int ac)
{
	if (ac <= 3)
		ft_sort_3(a);
	else if (ac <= 10)
		ft_sort_small(a, b);
	else if (ac <= 100)
	{
		ft_sort_med(a, b);
		ft_sort_by_cost(a, b);
	}
	else
		ft_sort_big(a, b, ac);
}

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;

	ac -= 1;
	if (ac == 0 || ft_parse(av) == 0)
		return (1);
	if (ft_init_stacks(ac, av, &a, &b) == 0)
		return (1);
	if (ft_check_doubles(a.stack, ac) == 0)
	{
		free(a.stack);
		free(b.stack);
		return (1);
	}
	transform_stack_to_index(a.stack, a.size);
	if (ft_is_in_order(a.stack, a.size, a.size - 1) == 1)
	{
		free(a.stack);
		free(b.stack);
		return (0);
	}
	ft_sort(&a, &b, ac);
	free(a.stack);
	free(b.stack);
	return (0);
}
