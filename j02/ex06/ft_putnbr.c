#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr  > 9)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

int	main(void)
{
	ft_putnbr(-2147483648);	
	return (0);
}
