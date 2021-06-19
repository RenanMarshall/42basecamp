int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (nb > 1)
		{
			result *= (nb - 1);
			nb--;
		}
	}
	return (result);
}
