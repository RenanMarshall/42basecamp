int	max_value(int *tab, int size)
{
	int	i;
	int	max;

	i = 0;
	max = 0;
	while (i < size)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;
	int	max;

	max = max_value(tab, size);
	i = 0;
	while (i < size)
	{	
		min = max;
		j = i;
		while (j < size)
		{	
			if (min > tab[j])
			{
				min = tab[j];
				tab[j] = tab[i];
				tab[i] = min;
			}
			j++;
		}
		i++;
	}
}
