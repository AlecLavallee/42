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
        int     i;
	int	destlen;

        i = 0;
        destlen = ft_strlen(dest);
        while (i < nb && src[i] != '\0')
        {
                dest[destlen + i] = src[i];
                i++;
        }
        dest[destlen + i] = '\0';
        return (dest);
}

int	main(void)
{
	char str1[] = "le test";
	char str2[] = "je suis";
	printf("resultat strncat : %s \n", strncat(str1, str2, 5));
	char str3[] = "le test";
	char str4[] = "je suis";
	printf("resultat ft_strncat : %s \n", ft_strncat(str3, str4, 5));
}
