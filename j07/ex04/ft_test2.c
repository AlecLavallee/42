#include <stdlib.h>
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		howmany_word(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		i++;
		if (str[i] == ' ' || str[i] == '\n' || str[i] == 9 || str[i] == '\0')
		{
			if (str[i - 1] != ' ' && str[i - 1] != '\n'
					&& str[i - 1] != 9 && str[i - 1] != '\0')
				count++;
		}
	}
	return (count);
}

int		wordpos_return(char *str, int pos)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j != pos && str[i] != '\0')
	{
		if (i == 0 && (str[i] == ' ' || str[i] == '\n' || str[i] == 9))
			i++;
		if ((str[i] == ' ' || str[i] == '\n' || str[i] == 9)
				&& (str[i - 1] != ' ' && str[i - 1] != '\n' && str[i - 1] != 9))
			j++;
		i++;
	}
	if (j == pos)
		i -= 1;
	return (i - 1);
}

char	*thisword(char *str, int pos)
{
	int i;
	int j;
	int h;
	char *result;

	h = 0;
	i = wordpos_return(str, pos);
	j = i;
	while (str[i] != ' ' && str[i] != '\n' && str[i] != 9 && i != -1)
		i--;
	i += 1;
	result = malloc(sizeof(char*) * (j - i) + 1);
	while (h != (j - i) + 1)
	{
		result[h] = str[i + h];
		h++;
	}
	result[h] = '\0';
	return (result);
}

char	**ft_split_whitespaces(char *str)
{
	int i;
	char **tab;

	i = 0;
	tab = (char **)malloc(howmany_word(str) * sizeof(*tab));
	while (i != howmany_word(str))
	{
		tab[i] = (char*)malloc(ft_strlen(thisword(str, i + 1)) * sizeof(*(tab[i])));
		tab[i] = thisword(str, i + 1);
		i++;
	}
	tab[i] = "\0";
	return (tab);
}

int     main(void)
{
        int i;
        int j;
        char **tab_str;
        char *str;

        i = 0;
        j = 0;
        str = "jesuis une fleur";
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
