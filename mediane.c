//pas utilisee encore

int ft_get_mediane(int *a, int ac)
{
	int *copy;
	
	copy = malloc(sizeof(int) * ac);
	int i = 0;
	while (i < ac)
	{
		copy[i] = a[i];
		i++;
	}
	i = 1;
	int mediane;
	while (i < ac)
	{
		if(copy[0] > copy[i])
			ft_swap(&copy[0], &copy[i]);
		i++;
	}
	i = 0;
	while (i < ac)
	{
		printf("copy[%d] : %d\n", i, copy[i]);
		i++;
	}
	mediane = copy[ac/ 2];
	free(copy);
	return(mediane);
}
