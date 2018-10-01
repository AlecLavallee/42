#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long nbr;

	nbr = nb;
	if (nb > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + 48);
	}
	if (nb < 9)
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

int	main(void)
{
	ft_putnbr(ft_is_prime(1215));
}
