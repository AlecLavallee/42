#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;

	i = 0;
	while (
}
int main(void)
{
	unsigned int	i;
	unsigned int	result;
	char dest[10] = "le test";
	char src[10] = "le vrai";
	
	i = 5;
	i = strlcat(dest, src, i);
	ft_putchar(i + 48);
}
