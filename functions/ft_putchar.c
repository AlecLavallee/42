#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv)
{
	char cara;

	cara = 'z';

	ft_putchar(cara);
	return(0);
}
