int	ft_sqrt(int nb)
{
	int res;

	res = 1;
	if (nb == 0)
		return (0);
	if (nb > 0)
	{
		while ((res * res) != nb)
		{
			res++;
			if (res > nb)
				return (0);
		}
	}
	return (res);
}
