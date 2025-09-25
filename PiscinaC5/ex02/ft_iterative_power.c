/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 09:28:23 by gapostig          #+#    #+#             */
/*   Updated: 2025/09/23 12:18:00 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power <= 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_iterative_power(4, 4));
	return (0);
}*/