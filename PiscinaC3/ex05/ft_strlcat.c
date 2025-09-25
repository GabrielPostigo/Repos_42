/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 20:34:38 by gapostig          #+#    #+#             */
/*   Updated: 2025/09/19 13:14:24 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len(char *str)
{
	unsigned int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sum;
	unsigned int	d;
	unsigned int	s;

	i = 0;
	sum = 0;
	d = len(dest);
	s = len(src);
	if (size > d)
		sum = d + s;
	else
		sum = size + s;
	while (src[i] && size > (d + i))
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	return (sum);
}
