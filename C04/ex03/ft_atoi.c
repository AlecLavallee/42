#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi_core(char *str, int i)
{
	int nb;

	nb = 0;
	while (str[i] >= 48 && str[i] <= 57) 
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb);
}

int	ft_atoi(char *str)
{
	int i;
	int sign;
	long nbr;

	i = 0;
	sign = 0;
	nbr = 0;
	while (str[i])
	{
		while (str[i] == 32)
			i++;
		while (str[i] == 43 || str[i] == 45) 
		{
			if (str[i] == 43)
				sign++;
			i++;
		}
		if (str[i] >= 48 && str[i] <= 57)
			nbr = ft_atoi_core(str, i);
		if (sign % 2 == 0 && sign != 0)
                	nbr *= -1;
		return (nbr);
	}
	return (nbr);
}

int	main(void)
{
	printf("Resultat ft_atoi : %d\n", ft_atoi("   4  ---+--+1a234ab567"));
	return (0);
}
