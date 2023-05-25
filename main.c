/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:39:40 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/20 22:56:29 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort(t_stack *stack, int ac)
{
	if (ac <= 3)
		ft_sort_3(stack->a, ac);
	else if (ac == 4 || ac == 5)
		ft_sort_5(stack, ac);
	else
		return ;
}

int main (int ac, char **av)
{
	t_stack stack;

	ac -= 1;
	if (ac == 0 || ft_parse(av) == 0 || ft_put_in_A(ac, av, &stack) == 0 )
		return (1);
	if (ft_check_doubles(stack.a, ac) == 0)
	{
		free(stack.a);
		free(stack.b);
		return (1);
	}
			int i = 0;
			while (i < ac)
			{
				printf("a[%d] : %d		b[%d] : %d\n", i, stack.a[i], i, stack.b[i]);
				i++;
			}
			printf("nba : %d | nbb : %d\n", stack.nba, stack.nbb);
	ft_sort(&stack, ac);
			i = 0;
			while (i < ac)
			{
				printf("a[%d] : %d		b[%d] : %d\n", i, stack.a[i], i, stack.b[i]);
				i++;
			}
			printf("nba : %d | nbb : %d\n", stack.nba, stack.nbb);
	return(0);
}
