#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	*range = NULL;
	i = -1;
	if (min >= max || (*range = (int*)malloc(sizeof(int) * (max - min))) == NULL)
		return (0);
	while (++i < (max - min))
		(*range)[i] = i + min;
	return (i);
}

int	main(void)
{
	int min;
	int max;
	int **range;
	int *memerange;
	int meme;

	meme = 3000;
	memerange = &meme;
	range = &memerange;

	min = 1;
	max = 10;
	**range = ft_ultimate_range(range, min, max);

	return (0);
}
