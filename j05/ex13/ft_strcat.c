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

char	*ft_strcat(char *dest, char *src)
{
	int	destlen;
	int	i;

	i = 0;
	destlen = ft_strlen(dest);
	while (src[i] !=  '\0')
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}

int	main(void)
{
	char str1[255] = "qwertyqj;rengqserjkgneqrskjqerzngqrkhjgbneqkrjfbdshfjknbvcjnqzkjerfhbnkjfvnqekjrghnbjfdkbvnqefdgkoiulj";
	char str2[20] = "azert";
	printf("resultat ft_strcat : %s \n", ft_strcat(str1, str2));
	char str3[240] = "qwertyqqzekufbnqrkjvbqnervkebnqrgkjqebnfkjvnbsjkerbnvjnazkjbzqeilfbqzekjnjbkvesriuvndservujsenbruiserg";
	char str4[20] = "azert";
	printf("resultat strcat : %s", strcat(str3, str4));
}
