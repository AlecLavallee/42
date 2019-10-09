#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nums(int a, int b)
{
	if (a < b || a == 99)
	{
		ft_putchar(a / 10 + 48);
		ft_putchar(a % 10 + 48);
		ft_putchar(' ');
		ft_putchar(b / 10 + 48);
		ft_putchar(b % 10 + 48);
		if (b < 100 && a < 98)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 00;
	b = 00;
	while (a < 99)
	{
		while (b < 99)
		{
			ft_print_nums(a, b);
			b++;
		}
		ft_print_nums(a, b);
		a++;
		if (b < 99)
			b = a + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
