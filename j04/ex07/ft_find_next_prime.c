#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long nbr;

	nbr = nb;
	if(nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + 48);
	}
	if(nbr < 9)
	{
		ft_putchar(nbr % 10 + 48);
	}
}

int	ft_is_prime(int nb)
{
	int res;

	res = 3;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	if ((nb % 2) == 0)
		return (0);
	if (nb > 2)
	{
		if (res == nb)
			return (1);
		while (res < nb)
		{
			if ((nb % res) != 0)
				res++;
			else
				return (0);
		}
		if (res == nb)
			return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb > 2)
	{
		while (ft_is_prime(nb) != 1)
			nb++;
		return (nb);
	}
}

int	main(void)
{
	ft_putnbr(ft_find_next_prime(14));
}
