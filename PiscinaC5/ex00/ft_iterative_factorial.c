/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:05:19 by gapostig          #+#    #+#             */
/*   Updated: 2025/09/23 09:19:17 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb == 0)
		return (0);
	i = nb;
	res = 1;
	while (i != 1)
	{
		res = res * i;
		i--;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_iterative_factorial(4));
	return (0);
}*/
