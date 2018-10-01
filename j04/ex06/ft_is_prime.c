int	ft_is_prime(int nb)
{
	int res;

	res = 3;
	if (nb == 0 || nb == 1)
		return (0);
	if ((nb % 2) == 0)
		return (0);
	if (nb > 2)
	{
		if (res == nb)
			return (1);
		while (res < nb)
		{
			if ((nb % res) != 0)
			{
				res++;
			}
			else
				return (0);
		}
		if (res == nb)
			return (1);
	}
}
