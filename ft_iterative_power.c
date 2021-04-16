
int	ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else
	{
		while (power >= 1)
		{
			res = res * nb;
			power--;
		}
	}
	return (res);
}
