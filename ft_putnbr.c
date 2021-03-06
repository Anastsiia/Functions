/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctifany <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:19:04 by ctifany           #+#    #+#             */
/*   Updated: 2021/01/26 20:15:31 by ctifany          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char minus;

	minus = '-';
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 12);
	}
	else if (nb >= 0 && nb <= 9)
	{
		nb = nb + '0';
		write(1, &nb, 1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb = -nb;
		write(1, &minus, 1);
		ft_putnbr(nb);
	}
}
