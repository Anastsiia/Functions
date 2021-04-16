
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int i;
	int e;

	i = argc - 1;
	while (i > 0)
	{
		e = 0;
		while (argv[i][e] != '\0')
		{
			ft_putchar(argv[i][e]);
			e++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
