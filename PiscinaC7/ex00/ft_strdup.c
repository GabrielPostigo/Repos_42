/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 12:21:09 by gapostig          #+#    #+#             */
/*   Updated: 2025/09/25 12:58:30 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*c;

	i = 0;
	while (src[i])
	{
		i++;
	}
	c = malloc (i * sizeof(char));
	i = 0;
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}
	return (c);
}

#include<stdio.h>

int	main(void)
{
	printf("%s", ft_strdup("Hola"));
	return (0);
}
