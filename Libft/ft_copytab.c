/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copytab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:08:53 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/27 16:22:09 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_copytab(int *tab, int size)
{
	int *copy;
	int i;

	i = 0;
	copy = malloc(sizeof(int) * size);
	while (i < size)
	{
		copy[i] = tab[i];
		i++;
	}
	return (copy);
}
