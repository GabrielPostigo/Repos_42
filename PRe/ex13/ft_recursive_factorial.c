/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:52:02 by gapostig          #+#    #+#             */
/*   Updated: 2025/11/04 16:52:06 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 12)
		return (0);
	else if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb >= 0)
		return (1);
	else
		return (0);
}
