int	ft_is_prime(int nb)
{
	int	count;
	int	x;
	int	number;

	if (nb == 2)
		return (1);
	else if (nb < 2 || nb % 2 == 0)
		return (0);
	x = 0;
	count = 2;
	number = nb / 2;
	while (count < number)
	{
		if (nb % count == 0)
			return (0);
		count++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
