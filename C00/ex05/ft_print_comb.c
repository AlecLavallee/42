#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_num(int num)
{
	if (num > 012 && num <= 789)
	{
		if ((num / 100 < num / 10 % 10) && (num / 10 % 10 < num % 10))
		{
			ft_putchar(num / 100 + 48);
			ft_putchar(num / 10 % 10 + 48);
			ft_putchar(num % 10 + 48);
			if (num != 789)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

void	ft_print_comb(void)
{
	int num;

	num = 0;

	while (num <= 789) 
	{
		ft_print_num(num);
		num++;
	}
}

int	main(void) 
{
	ft_print_comb();
	return (0);
}
