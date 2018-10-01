#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int number;

	number = 12;
	while(number <= 789)
	{	
		if((number / 10 % 10 < number % 10) && (number / 100 < number / 10 % 10))
		{
			ft_putchar(number / 100 + 48);
			ft_putchar(number / 10 % 10 + 48);
			ft_putchar(number % 10 + 48);
			ft_putchar('\n');
		}
		number++;
	}
}

int	main(void)
{
	ft_print_comb();
	return(0);
}
