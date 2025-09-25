/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:21:12 by gapostig          #+#    #+#             */
/*   Updated: 2025/09/24 15:45:31 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb)
	{
		i++;
	}
	if (nb % i)
		return (0);
	return (i);
}
/*
#include<stdio.h>

int	main(void)
{
	printf("%i", ft_sqrt(8));
	return (0);
}*/
