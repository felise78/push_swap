/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:39:55 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/19 15:48:05 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_parse(char **av)
{
	int i;

	i = 1;
	while(av[i])
	{
		if (!(ft_check_digits(av[i])))
		{
			ft_putstr_fd("Error\n", 2);
			return (0);
		}
		i++;
	}
	return (1);
}

int     ft_check_digits(char *str)
{
        int i;
        int j;
        char *charset = "-0123456789";

        i = 0;
        while(str[i])
        {
                j = 0;
                while (str[i] != charset[j])
                {
                        j++;
                        if(j == 11)
                            return (0);
                }
                i++;
        }
        return (1);
}

int	ft_check_doubles(int *a, int ac)
{
	int i;
	int j;

	i = 0;
	while(i < ac)
	{	
		j = i + 1;
		while (j < ac)
		{
			if (a[i] != a[j])
				j++;
			else if (a[i] == a[j])
			{
				ft_putstr_fd("Error\n", 2);
				return (0);
			}
		}
		i++;
	}
	return (1);
}
