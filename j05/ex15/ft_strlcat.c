#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	i;
	size_t	s1_end;

	i = 0;
	while (dest[i] && i < size)
		i++;
	s1_end = i;
	while (src[i - s1_end] && i < size - 1)
	{
		dest[i] = src[i - s1_end];
		i++;
	}
	if (s1_end < size)
		dest[i] = '\0';
	return (s1_end + ft_strlen(src));
}

void	main(void)
{
	char string1[] = "J'aime";
	char string2[] = "eapate les qzeoifn jqzefo";
	printf("resultat de ft_strlcat : %d \n", ft_strlcat(string1, string2, 8));
	printf("%s", string1);
}
