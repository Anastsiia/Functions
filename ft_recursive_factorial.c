
int	ft_recursive_factorial(int nb)
{
	int res;

	res = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		res = nb * (ft_recursive_factorial(nb - 1));
	return (res);
}
