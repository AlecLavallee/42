#include <stdio.h>
#include <string.h>
#include <string.h>

int	main(void)
{
	char str1[50] = "je suis le test";
	char str2[50] = "test";
	printf("%d", strlcat(str1, str2));
}
