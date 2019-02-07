#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
		ft_putchar(nbr % 10 + '0');
	}
	if (nbr < 9)
	{
		ft_putchar(nbr % 10 + '0');
	}
}

int	ft_sqrt(unsigned int nb)
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

int	main(void)
{
	ft_putnbr(ft_sqrt(36));
}
