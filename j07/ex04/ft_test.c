#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void            ft_putchar(char c)
{
        write(1, &c, 1);
}

int		calc_nb_words(char *str, int *size_word)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			word++;
		while (str[i] != ' ')
		{
			size_word[word - 1] = size_word[word - 1] + 1;
			i++;
		}
		while (str[i] == ' ')
			i++;
	}
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	int		nb_words;
	int		tab[10];
	char	*temp;
	char	**string;
	int		i;

	i = 0;
	nb_words = calc_nb_words(str, tab);
	*string = (char*)malloc(sizeof(**string) * (nb_words + 1));
	while (i < nb_words)
	{
		string[i] = (char*)malloc(sizeof(*temp) * (tab[i] + 1));
		i++;
	}
}

int	main(void)
{
	int i;
	int j;
	char	*str;
	char	**tab_str;

	i = 0;
	j = 0;
	str = "je suis une fleur";
	tab_str = ft_split_whitespaces(str);
	while (tab_str[i])
	{
		while (tab_str[i][j])
		{
			ft_putchar(tab_str[i][j]);
			j++;
		}
		i++;
	}
	return (0);
}
