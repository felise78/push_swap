/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:45:40 by hemottu           #+#    #+#             */
/*   Updated: 2023/05/27 14:45:40 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void    ft_sort_big(t_stack *a, t_stack *b, int chunk)
// {
//     int **sorted;
//     // *sorted = malloc(sizeof(int *) * chunk);
//     // if (!*sorted)
//     //     return ;
//     if (a->size % chunk == 0) 
//         sorted = malloc(sizeof(int) * (a->size / chunk));
//     else
//         sorted = malloc(sizeof(int) * (a->size / chunk + 1));
//     if (!sorted)
//         return ;
//     int i = 0;
//     while (i < a->size)
//     {
//         **sorted = a->stack[i];
//         i++;
//     }
//     sort_int_tab(sorted, a->size);
//                 // i = 0;
//                 // while (i < a->size)
//                 // {
//                     printf("%d\n", **sorted);
//                 //     i++;
//                 // }
//                 (void)b;
// }