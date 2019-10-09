#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	**allocate_space(char **tab_str, char *str, int i, int j)
{
	int n;

	n = 0;
	while (n < i)
	{
		tab_str[j][i] = str[n];
		n++;
	}
	tab_str[j][i] = '\0';
	return (tab_str);
}
	
char	**ft_split_whitespaces(char *str)
{	
	int i;
	int j;
	char **tab_str;
	char *ptr_tab_str;

	i = 0;
	j = 0;
	tab_str = &ptr_tab_str;
	while (str[i] != '\0')
	{
		if (str[i] == 11 || str[i] == 12 || str[i] == 40)
		{
			if (str[i + 1] > 32)
				tab_str = allocate_space(tab_str, str, i, j);
		}
		i++;
	}
	return (tab_str);
}

int	main(void)
{
	int i;
	int j;
	char **tab_str;
	char *str;

	i = 0;
	j = 0;
	str = "je suis une fleur";
	tab_str = ft_split_whitespaces(str);

	while (tab_str[i][j] != '\0')
	{
		ft_putchar(tab_str[i][j]);
		j++; 
	}	
	return (0);
}
