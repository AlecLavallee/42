char	*ft_strrev(char *str)
{
	int i;
	int n;
	int tmp;

	i = 0;
	n = 0;
	while (str[n])
		n++;
	n--;
	while (i < n)
	{
		tmp = str[n];
		str[n] = str[i];
		str[i] = tmp;
		n--;
		i++;
	}
	return (str);
}
