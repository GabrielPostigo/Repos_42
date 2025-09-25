/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:45:08 by gapostig          #+#    #+#             */
/*   Updated: 2025/09/24 13:55:04 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		write (1, &c[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	j;

	j = 1;
	if (!(argc > 1))
		return (0);
	while (j < argc)
	{
		ft_print_params(argv[j]);
		j++;
	}
	return (0);
}
