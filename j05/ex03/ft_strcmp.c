int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (s1[i] == s2[i] && s2[i] != '\0' && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
