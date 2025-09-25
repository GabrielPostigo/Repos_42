/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:59:23 by gapostig          #+#    #+#             */
/*   Updated: 2025/09/22 11:03:06 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if ((str[i - 1] >= 32 && str[i - 1] <= 47)
			|| (str[i - 1] >= 58 && str[i - 1] <= 64)
			|| (str[i - 1] >= 91 && str[i - 1] <= 96)
			|| (str[i - 1] >= 123 && str[i - 1] <= 126))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if ((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			|| (str[i - 1] >= 'a' && str[i - 1] <= 'z'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
#include <unistd.h>

int	main()
{
	char	str[] = "";
	ft_strcapitalize(&str[0]);

	int	i = 0;
	while(str[i])
	{
		write(1,&str[i],1);
		i++;
	}
	write(1,"\n",1);
}
*/
