#include "push_swap.h"

void ft_sort_med(t_stack *a, t_stack *b)
{
    int pivot;
    int i;
    int j;

    pivot = ft_get_mediane(a->stack, a->size);
    i = 0;
    j = a->size - 1;
    while (a->size > 3)
    {
        ft_init_cost(a);
        if (a->stack[i] < pivot)
        {
            ft_pb(a, b);
            i++;
        }
        else if (a->stack[i + 1] >= pivot && a->stack[j] < pivot)
        {
            ft_rra(a->stack, a->size);
            ft_pb(a, b);
            i++;
            j--;
        }
        else if (a->stack[i + 1] < pivot && a->stack[j] >= pivot)
        {
            ft_ra(a->stack, a->size);
            ft_pb(a, b);
        }
        i++;
        j--;
        free(a->cost);
    }
    ft_sort_3(a->stack, a->size);
    //ft_sort_by_cost(a, b);
}