int	ft_sqrt(int nb)
{
	int	count;
	int	result;
	int	number;
	int	sub;

	count = 0;
	result = nb;
	number = 0;
	sub = 1;
	while (result > 0 )
	{
		result = result - sub;
		count++;
		sub += 2;
	}
	if ((count * count) == nb)
	{
		return (count);
	}
	else
		return (0);
}
