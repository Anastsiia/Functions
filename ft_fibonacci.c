/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctifany <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 23:01:43 by ctifany           #+#    #+#             */
/*   Updated: 2021/01/27 23:15:02 by ctifany          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
