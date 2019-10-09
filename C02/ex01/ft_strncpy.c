#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char dest[40];
	char src[60];

	memset(dest, '\0', 40);
 	ft_strncpy(src, "je suis le goeland", 8);
	ft_strncpy(dest, src, 8);
	printf("Result ft_strncpy : %s\n", dest);

	memset(dest, '\0', 40);
	strncpy(src, "je suis la reine d'Angleterre", 8);
	strncpy(dest, src, 8);
	printf("Result strncpy : %s\n", dest);
	return (0);
}	
