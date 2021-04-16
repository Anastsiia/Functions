
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int i;
	int e;

	i = 1;
	while (i < argc)
	{
		e = 0;
		while (argv[i][e] != '\0')
		{
			ft_putchar(argv[i][e]);
			e++;
		}
		i++;
		ft_putchar('\n');
	}
	return (0);
}
