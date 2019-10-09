#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int	i;
	int	j;

	if(!src)
		return (NULL);
	i = ft_strlen(src);
	cpy = (char*)malloc(sizeof(i + 1));
	if(!cpy)
		return (NULL);
	j = 0;
	while (j < i)
	{
		cpy[j] = src[j];
		j++;
	}
	cpy[i] = '\0';
	return (cpy);
}

int	main()
{
	char*	string1 = "Je suis le test.";
	char*	string2;
	int	i;

	i = 0;
	string2 = ft_strdup(string1);
	while (string2[i] != '\0')
	{
		ft_putchar(string2[i]);
		i++;
	}
	return (0);
}
