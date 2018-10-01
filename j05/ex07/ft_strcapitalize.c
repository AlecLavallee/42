#include <stdio.h>

int	is_alphanumeric(int c)
{
	if ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57)) 
	{
		return (1);
	}
	else {
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((is_alphanumeric(str[i])) == 1)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
			while ((is_alphanumeric(str[i]) == 1))
			{
				i++;
			}
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str1[75] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str1));
}
