/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:44:00 by gapostig          #+#    #+#             */
/*   Updated: 2025/11/06 13:51:52 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	t;
	int	j;
	int	*mat;

	i = 0;
	if (min >= max)
		return (0);
	while (min < max)
		i++;
	t = i + 1;
	mat = malloc(sizeof(int) * t);
	if (mat == NULL)
		return (0);
	while (j < t)
	{
		if (j == 0)
			mat[j] == min;
		else
			mat[j] = min + j;
		j++;
	}
	mat[i] = '\0';
	return (mat);
}
