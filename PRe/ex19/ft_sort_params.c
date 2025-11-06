/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:26:40 by gapostig          #+#    #+#             */
/*   Updated: 2025/11/06 13:54:27 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_params(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

char	**ft_swap(char **str, int i, int j)
{
	i = 1;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			n = ft_strcmp(str[i], str[j]);
			if (n < )
		}
	}
}

int	main(int argc, char **argv)
{
	int	j;
	int	k;

	j = 1;
	if (argc > 1)
	{
		while (argv[j] && j < argc - 1)
		{
			k = j + 1;
			while (k < argc)
			{
				**argv = ft_swap(**argv, j, k);
				k++;
			}
			ft_print_params(argv[j]);
			j++;
		}
		j = 1;
		while (j < argc)
		{
			ft_print_params(argv[j]);
			j++;
		}
	}
	return (0);
}
