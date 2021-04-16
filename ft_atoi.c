
int	ft_atoi(char *str)
{
	int i;
	int count;
	int result;

	i = 0;
	count = 1;
	result = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' ||
            str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            count = -count;
        i++;
    }
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - 48;
        i++;
	}
	return (result * count);
}
