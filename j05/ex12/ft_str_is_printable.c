#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 32)
			i++;
		else return (0);
	}
	return (1);
}

int	main(void)
{
	char str[50] = " q1ze g65e1gfe56g1re jesuisletest";
	printf("%d", ft_str_is_printable(str));
}
