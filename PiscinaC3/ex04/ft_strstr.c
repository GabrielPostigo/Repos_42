/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:01:32 by gapostig          #+#    #+#             */
/*   Updated: 2025/09/19 13:12:20 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (to_find[0] == '\0')
		return (0);
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*str;
	char	*to_find;

	str = "holabuenosdias";
	to_find = "";
	if (ft_strstr(str, to_find))
		write (1, "Perfe\n", 6);
	else
		write(1, "Nah uh\n", 7);
	return (0);
}*/
