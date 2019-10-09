#include <stdio.h>

int	ft_convert(int nb)
{
	int i = 1;
	int mod;
	int binary = 0;	
	while (nb != 0)
	{
		mod = nb % 2;
		nb/=2;
		binary+=mod*i;
		i*=10;
	}
	return binary; 
}

int	main(void)
{
	printf("%d", (ft_convert(255)));
}
