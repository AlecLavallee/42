#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long nbr;

	nbr = nb;
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + 48);
	}
	if (nbr < 9)
		ft_putchar(nbr % 10 + 48);
}

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

int	main(void)
{
	ft_putnbr(ft_iterative_power(10, 3));
}
