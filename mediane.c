#include "push_swap.h"

int ft_get_mediane(int *a, int ac)
{
	int *copy;
	int i = 0;
	int mediane;

	copy = malloc(sizeof(int) * ac);
	while (i < ac)
	{
		copy[i] = a[i];
		i++;
	}
	sort_int_tab(copy, ac);
	mediane = copy[ac/ 2];
	free(copy);
	return(mediane);
}
