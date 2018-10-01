#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void 	ft_putnbr(int nb)
{
	long nbr;

	nbr = nb;
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + 48);
	}
	if (nbr < 9)
	{
		ft_putchar(nbr % 10 + 48);
	}
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power > 1)		
		return (nb * ft_recursive_power(nb, power - 1));
}

int	main(void)
{
	ft_putnbr(ft_recursive_power(100, 4));
}
