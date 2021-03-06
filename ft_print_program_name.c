/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctifany <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 17:12:41 by ctifany           #+#    #+#             */
/*   Updated: 2021/01/28 19:11:42 by ctifany          ###   ########.fr       */
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

	i = 0;
	while (argv[argc - 1][i] != '\0')
	{
		write(1, &argv[argc - 1][i], 1);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
