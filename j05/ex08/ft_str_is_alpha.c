#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 48 && str[i] <= 57)
				|| (str[i] >= 65 && str[i] <= 90)
				|| (str[i] >= 97 && str[i] <= 122))
		{
			i++;
		}
		else return (0);
	}
	return (1);
}

int	main(void)
{
	char	str1[20] = "";
	printf("%d", ft_str_is_alpha(str1));
}
