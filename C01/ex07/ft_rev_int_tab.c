void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	aux;

	count = 0;
	while (count < size / 2)
	{
		aux = tab[count];
		tab[count] = tab[size - count - 1];
		tab[size - count - 1] = aux;
		count++;
	}
}
