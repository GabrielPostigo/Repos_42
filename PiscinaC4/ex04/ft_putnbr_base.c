/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 13:38:37 by gapostig          #+#    #+#             */
/*   Updated: 2025/09/25 13:44:55 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	int	blen;

	blen = 0;
	while (base[blen])
	{
		if (base[blen] == '-' || base[blen] == '+')
			return (1);
		blen++;
	}
	if (blen <= 1)
		return (1);
	if (nbr >= blen)
		ft_putnbr_base(nbr / blen, base);
	write(1, base[nbr % blen], 1);
}
