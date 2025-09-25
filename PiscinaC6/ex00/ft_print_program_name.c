/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:37:19 by gapostig          #+#    #+#             */
/*   Updated: 2025/09/24 11:44:17 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *c)
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
	if (argc != 1)
		return (0);
	else
		ft_print_program_name(argv[0]);
	return (0);
}
