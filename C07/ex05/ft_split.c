#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_in(char c, char *charset)
{
	while (*charset)
		if (*charset++ == c)
			return (1);
	return (0);
}

char	*ft_str_split_dup(char *str, char *charset)
{
	int		n;
	char	*tmp;

	n = 0;
	while (str[n] && !is_in(str[n], charset))
		n++;
	tmp = malloc(sizeof(char) * (n + 1));
	while (*str && !is_in(*str, charset))
		*tmp++ = *str++;
	*tmp = '\0';
	return (tmp - n);
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	char	**tab;
	char	*tmp;

	size = 0;
	tmp = str;
	while (*tmp)
		if (!is_in(*tmp++, charset)
				&& (is_in(*tmp, charset)))
			size++;
	if (!is_in(*(tmp - 1), charset))
		size++;
	tab = malloc((size + 1) * sizeof(char*));
	tab[size] = 0;
	if (!is_in(*str, charset))
		*tab++ = ft_str_split_dup(str, charset);
	while (*++str && *(str + 1))
		if ((is_in(*str, charset)) && !is_in(*(str + 1), charset))
			*tab++ = ft_str_split_dup(++str, charset);
	return (tab - size);
}

int	main(void)
{
	int i = 0;
	int n = 0;
	char **array;
	char *str = "Je suis une fleur";

	array = ft_split(str, "e");
	while (array[i] != 0)
	{
		while (array[i][n])
		{
			ft_putchar(array[i][n++]);
		}
		ft_putchar('\n');
		i++;
	}
}
