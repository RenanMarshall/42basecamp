int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	else
	{
		if (nb == 1 || nb == 0)
			return (1);
		else
		{
			result = ft_recursive_factorial(nb - 1) * nb;
		}
		return (result);
	}
}
