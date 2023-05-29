#include "push_swap.h"

int ft_is_smaller(int *stack, int size)
{
    int i;
    int *sorted;

    sorted = ft_copytab(stack, size);
    sort_int_tab(sorted, size);
    i = 0;
    while (i < size && stack[i] != sorted[0])
        i++;
    free(sorted);
    return(i);
}

void ft_push_smaller_to_a(t_stack *a, t_stack *b, int small)
{
    int i;

    if(small <= (b->size / 2))
    {
        i = 0;
        while (i < small)
        {
            ft_rb(b->stack, b->size);
            i++;
        }
        ft_pa(a, b);
   }
    else
    {   
        i = b->size - small;
        while (i > 0)
        {
            ft_rrb(b->stack, b->size);
            i--;
        }
        ft_pa(a, b);
    } 
}
