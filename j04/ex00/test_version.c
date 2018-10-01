#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long nbr;

	nbr = nb;
	if (nb < 0)
	{
		ft_putchar('-');
	}
	if (nb > 9)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

int	ft_iterative_factorial(int nb)
{
	int res;
	int i;

	if (nb < 0 || nb > 12)
		return (0);	
	if (nb == 1 || nb == 0)
		return (1);
	if (nb == 2)
		return (2);
	if (nb > 2)
	{
		res = 1;
	       	i = 2;
		while (i <= nb)
		{
			res *= i;
			i++;
		}
	}
	return (res);
}

int	main(void)
{
	ft_putnbr(ft_iterative_factorial(12));
}
