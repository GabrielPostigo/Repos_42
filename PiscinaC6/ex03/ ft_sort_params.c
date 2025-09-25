/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_sort_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 14:00:32 by gapostig          #+#    #+#             */
/*   Updated: 2025/09/25 12:06:29 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_ord(int cont, char **c)
{
	int		i;
	int		j;
	char	*n;

	i = 1;
	while (i < cont)
	{
		j = i + 1;
		while (c[j])
		{
			if (ft_strcmp(c[i], c[j]) > 0)
			{
				n = c[j];
				c[j] = c[i];
				c[i] = n;
				j = i + 1;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	j;

	j = 0;
	if (!(argc > 1))
		return (0);
	
	return (0);
}
