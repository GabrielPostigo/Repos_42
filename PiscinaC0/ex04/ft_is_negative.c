/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 20:24:20 by gapostig          #+#    #+#             */
/*   Updated: 2025/09/03 20:35:36 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	signo;

	if (n >= 0)
	{
		signo = 'P';
		write(1, &signo, 1);
	}
	else
	{
		signo = 'N';
		write(1, &signo, 1);
	}
}

/*
int main()
{
	ft_is_negative(33);
	ft_is_negative(0);
	ft_is_negative(-1);

	return 0;
}
*/
