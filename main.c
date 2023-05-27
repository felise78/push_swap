/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:39:40 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/27 14:35:26 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort(t_stack *a, t_stack *b, int ac)
{
	if (ac <= 3)
		ft_sort_3(a->stack, ac);
	else if (ac == 4 || ac == 5)
		ft_sort_5(a, b, ac);
	else if (ac < 30)
		ft_sort_med(a, b);
	// else if (ac <= 100)
	// 	ft_sort_big(a, b, 5);
   	// else
	// 	ft_sort_big(a, b, 11);
}

int main (int ac, char **av)
{
	t_stack a;
	t_stack b;
	
	ac -= 1;
	if (ac == 0 || ft_parse(av) == 0 || ft_init_stacks(ac, av, &a, &b) == 0 )
		return (1);
	if (ft_check_doubles(a.stack, ac) == 0)
	{
		free(a.stack);
		free(b.stack);
		return (1);
	}
			int i = 0;
			while (i < ac)
			{
				printf("a[%d] : %d		b[%d] : %d\n", i, a.stack[i], i, b.stack[i]);
				i++;
			}
			printf("nba : %d | nbb : %d\n", a.size, b.size);
	ft_sort(&a, &b, ac);
			i = 0;
			while (i < ac)
			{
				printf("a[%d] : %d		b[%d] : %d\n", i, a.stack[i], i, b.stack[i]);
				i++;
			}
			printf("nba : %d | nbb : %d\n", a.size, b.size);
	return(0);
}
