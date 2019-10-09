#include <unistd.h>
#include <stdlib.h>

void	ft_putchar (char c)
{
	write(1, &c, 1);
}

int	calc_len(int argc, char **argv)
{
	int i;
	int j;
	int len;

	j = 0;
	len = 0;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
			i++;
		len = len + i;
		j++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int i;
	int j;
	int count;
	char *buffer;

	i = 1;
	count = 0;
	buffer = (char*)malloc((calc_len(argc, argv) + argc));
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			buffer[count] = argv[j][i];
			i++;
			count++;
		}
		buffer[count] = '\n';
		count++;
		j++;
	}
	return (buffer);
}

int	main(int argc, char **argv)
{
	int i;
	char *params;

	i = 0;
	params = NULL;

	params = ft_concat_params(argc, argv);
	while (params[i] != '\0')
	{
		ft_putchar(params[i]);
		i++;
	}
	return (0);
}
