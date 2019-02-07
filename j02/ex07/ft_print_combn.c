#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int n, int *range)
{
	int i;
	int display;

	i = 0;
	display = 1;
	while (i < n)
	{
		if(range[i - 1] >= range[i])
			display = 0;	
		i++; 
	}
	if (!display)
		return ;
	
	i = -1;
	while (++i < n)
	{
		ft_putchar(range[i] + 48);
	}
}

void	ft_print_combn(int n)
{
	int	combn[10];
	int	i;

	i = -1;
	while (++i < n)
		combn[i] = i;
	while (combn[0] <= (10 - n) && n >= 1)
	{
		print(n, combn);
		if (n == 10)
			break ;
		combn[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (combn[i] > 9)
			{
				combn[i - 1]++;
				combn[i] = 0;
			}
		}
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
