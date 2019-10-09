void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int i;
	char *str;
	i = 0;
	str = argv[0];

	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}
