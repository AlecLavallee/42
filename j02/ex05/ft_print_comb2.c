#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 00;
	b = 01;

	while(a <= 98)
	{
		while(b < 99)
		{
			ft_putchar(a / 10 + 48);
			ft_putchar(a % 10 + 48);
			ft_putchar(' ');
			ft_putchar(b / 10 + 48);
			ft_putchar(b % 10 + 48);
			ft_putchar(',');
			ft_putchar(' ');
			b++;
		}
		ft_putchar(a / 10 + 48);
		ft_putchar(a % 10 + 48);
		ft_putchar(' ');
		ft_putchar(b / 10 + 48);
		ft_putchar(b % 10 + 48);
		if (a != 98)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return(0);
}
