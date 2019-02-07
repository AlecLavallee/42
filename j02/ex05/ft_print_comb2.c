#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int x, int y)
{
	ft_putchar(x / 10 + 48);
	ft_putchar(x % 10 + 48);
	ft_putchar(' ');
	ft_putchar(y / 10 + 48);
	ft_putchar(y % 10 + 48);
	if (x != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
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
			ft_display(a, b);
			b++;
		}
		ft_display(a, b);
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return(0);
}
