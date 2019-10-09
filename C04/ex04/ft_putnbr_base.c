#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int i;
	int ascii;

	i = 0;
	ascii = 0;
	while (base[i])
		ascii += base[i++];
	if (ascii == 930)
		return (16);
	if (ascii == 525)
		return (10);
	if (ascii == 97)
		return (2);
	if (ascii == 880)
		return (8);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size_base;
	int	nbr_final[100];
	int	i;

	i = 0;
	size_base = 0;
	if (check_base(base) != 1)
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[size_base])
			size_base++;
		while (nbr)
		{
			nbr_final[i] = nbr % size_base;
			nbr = nbr / size_base;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[nbr_final[i]]);
	}
}

int	main(void)
{
	ft_putnbr_base(1000, "01");
	return (0);
}
