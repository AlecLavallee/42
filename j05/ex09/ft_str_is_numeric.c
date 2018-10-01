#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else return (0);
	}
	return (1);
}

int	main(void)
{
	char	str1[11] = "";
	printf("%d", ft_str_is_numeric(str1));
}
