#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ft(int *nbr)
{
	*nbr = 6;
}

int	main(void)
{
	int a;
	int *number;

	a = 12;
	number = &a;
	ft_ft(number);
	ft_putchar(*number + 48);
}
