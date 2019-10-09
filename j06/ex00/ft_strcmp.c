void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long nbr;
	nbr = nb;

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + 48);
	}
	if (nbr < 9)
	{
		ft_putchar(nbr + 48);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int res;

	i = 0;
	res = 0;	
	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		res = res + s1[i] - s2[i];
		i++;
	}
	while (s1[i] != '\0')
	{
		res = res + s1[i];
		i++;
	}
	while (s2[i] != '\0')
	{
		res = res - s2[i];
		i++;
	}
	return (res);
}
