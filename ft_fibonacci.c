
int	ft_fibonacci(int index)
{
	int res;

	res = 1;
	if (index == 0)
		return (0);
	else if (index < 0)
		return (-1);
	else if (index == 1)
		return (1);
	else
	{
		res = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
		return (res);
	}
	return (0);
}
