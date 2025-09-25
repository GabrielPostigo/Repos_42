/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 12:35:07 by gapostig          #+#    #+#             */
/*   Updated: 2025/09/25 13:01:32 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*rn;

	if (min > max)
		return (0);
	j = 0;
	i = min + 1;
	while (i > min && i < max)
	{
		i++;
		j++;
	}
	rn = malloc (j * sizeof(int));
	rn[0] = min;
	j = 1;
	i = min + 1;
	while (i > min && i < max)
	{
		rn[j] = i;
		i++;
		j++;
	}
	rn[j] = max;
	return (rn);
}

#include<stdio.h>

int	main(void)
{
	printf("%p", ft_range(4, 8));
	return (0);
}
