void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int is_positive;
	long nbr;

	is_positive = 0;
	nbr = nb;
	if (nbr < 0)
	{
		nbr *= -1;
		is_positive = 1;
	}
	if (is_positive)
		ft_putchar ('-');
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + 48);
	}
	if (nbr < 9)
		ft_putchar(nbr + 48);
}
