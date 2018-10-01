#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char cara;

	cara = 'z';
	while(cara >= 'a')
	{
		ft_putchar(cara);
		cara--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
