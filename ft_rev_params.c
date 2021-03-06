  /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctifany <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 18:36:14 by ctifany           #+#    #+#             */
/*   Updated: 2021/01/28 19:19:16 by ctifany          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
