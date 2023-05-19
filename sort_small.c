/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:42:55 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/19 15:52:40 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort_3(int *a, int ac)
{
	if(ac == 2)
	{
		if (a[0] > a[1])
			ft_sa(a);
	}
	else if (ac == 3)
	{
		 if(a[0] > a[1] && a[0] > a[2])
		{
			ft_ra(a, ac);
			if(a[0] > a[1])
				ft_sa(a);
		}
		else if(a[0] < a[1] && a[0] > a[2])
			ft_rra(a, ac);
		else if (a[0] > a[1] && a[0] < a[2])
			ft_sa(a);
		else if (a[0] < a[1] && a[1] > a[2])
		{	
			ft_sa(a);
			ft_ra(a, ac);
		}
	}
}