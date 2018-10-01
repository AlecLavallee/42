#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int destlen;

	i = 0;
	destlen = ft_strlen(dest);
	while ((i < nb) && (src[i] != '\0'))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char str1[20] = "Je suis le ";
	char str2[20] = "test";
	printf("resultat strncat : %s \n", strncat(str1, str2, 4));
	char str3[20] = "Je suis le ";
	char str4[20] = "test";
	printf("resultat ft_strncat : %s", ft_strncat(str3, str4, 4));
}
