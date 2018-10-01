
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
		while(str[i] >= 7 && str[i] <= 13)
			i++;
		if(str[i] == '-' || str[i] == '+')
		{
			sign = -1;
			i++;
		}
		while(str[i] >= '0' && str[i] <= '9')
		{
			rvalue = rvalue * 10 + str[i] - 48;
			i++;
		}
	}
	return (rvalue * sign);
}
