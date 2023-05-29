#include "push_swap.h"

void ft_sort_med(t_stack *a, t_stack *b)
{
    int pivot;
    int i;

    while (a->size > 3)
    {
        i = 0;
        pivot = ft_get_mediane(a->stack, a->size);
        while (i < a->size && a->size > 3)
        {
            if (a->stack[0] <= pivot)
                ft_pb(a, b);
            else    
                ft_ra(a->stack, a->size);
            i++;
        }
    }
    ft_sort_3(a->stack, a->size);
}