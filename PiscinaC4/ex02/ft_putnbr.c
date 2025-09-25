/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 19:08:16 by gapostig          #+#    #+#             */
/*   Updated: 2025/09/25 13:38:55 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printear(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	i;

	i = nb;
	if (i < 0)
	{
		printear('-');
		i *= -1;
	}
	if (i > 9)
		ft_putnbr(i / 10);
	printear(i % 10 + '0');
}
/*
int	main(void)
{
	ft_putnbr(-5);
	printear('\n');
	ft_putnbr(-10);
	printear('\n');
	ft_putnbr(0);
	printear('\n');
	ft_putnbr(5);
	printear('\n');
	ft_putnbr(100010);
	return (0);
}*/
