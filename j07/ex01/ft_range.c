#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	*ft_range(int min, int max)
{
	int	*range;

	if (min >= max)
		return (NULL);
	if (!(range = malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (max >= min)
	{
		range[max - min - 1] = max - 1;
		max--;
	}
	return (range);
}

int	main(void)
{
	int min;
	int max;
	int i;
	int *range_result;

	min = 1;
	max = 10;
	i = 0;
	range_result = ft_range(min, max);
	while (i + 1 < max)
	{
		ft_putchar(range_result[i] + 48);
		i++;
	}
	return (0);
}
