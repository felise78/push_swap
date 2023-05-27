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

int ft_is_place(t_stack *a, int b0)
{
    int i;
    
    i = ft_is_smaller(a->stack, a->size);
    if (b0 < a->stack[i])
        return (i);
    while (i < a->size)
    {
        if (b0 < a->stack[i])
            return(i);
        i++;
    }
    if (ft_is_smaller(a->stack, a->size) != 0)
    {
        i = 0;
        while (i < ft_is_smaller(a->stack, a->size))
        {
            if (b0 < a->stack[i])
                return (i);
            i++;      
        }
    }
    return (i++);
}

void ft_init_pos(t_stack *a, t_stack *b)
{
    int i;

    i = 0;
    b->pos = malloc(sizeof(int) * b->size);
    if (!b->pos)
        return ;
    while (i < b->size)
    {
        b->pos[i] = ft_is_place(a, b->stack[i]);
        i++;
    }
}

void ft_push_smaller(t_stack *a, t_stack *b, int small)
{
    int i;

    i = 0;
    if(small <= (b->size / 2))
    {
        while (i < small)
        {
            ft_rb(b->stack, b->size);
            i++;
        }
        ft_pa(a, b);
    }
    else
    {   
         while (i < small)
        {
            ft_rrb(b->stack, b->size);
            i++;
        }
        ft_pa(a, b);
    } 
}





