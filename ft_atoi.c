/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctifany <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:16:57 by ctifany           #+#    #+#             */
/*   Updated: 2021/01/26 20:51:06 by ctifany          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int count;
	int result;

	i = 0;
	count = 1;
	result = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' ||
            str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            count = -count;
        i++;
    }
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - 48;
        i++;
	}
	return (result * count);
}
