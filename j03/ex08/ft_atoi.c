int	ft_atoi(char *str)
{
	int i;
	int sign;
	int rvalue;

	i = 0;
	sign = 1;
	rvalue = 0;
	while (str[i])
	{
		while((str[i] >= 7 && str[i] <= 13) || str[i] == 32 || str[i] == 43)
			i++;
		if(str[i] == '-')
			sign = -1;
		while(str[i] >= '0' && str[i] <= '9')
		{
			rvalue = rvalue * 10 + str[i] - 48;
			i++;
		}
		return (rvalue * sign);
		i++;
	}
}
