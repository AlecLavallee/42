int	ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	i = 0;
	res = nb;
	if (power < 0)
		return (0);
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
