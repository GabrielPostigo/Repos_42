/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:17:16 by gapostig          #+#    #+#             */
/*   Updated: 2025/10/30 12:11:46 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char	c;

	c = '+';
	if (n < 0)
		c = '-';
	if (c == '+')
		ft_putchar('P');
	else if (c == '-')
		ft_putchar('N');
}
/*
int	main(void)
{
	ft_is_negative(9);
	ft_is_negative(-9);
	ft_is_negative(0);
	return (0);
}*/
