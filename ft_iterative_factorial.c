
int	ft_iterative_factorial(int nb)
{
	int res;
	int i;

	i = 1;
	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		while (i <= nb)
		{
			res = res * i;
			i++;
		}
	return (res);
}
