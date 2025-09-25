/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 12:25:04 by gapostig          #+#    #+#             */
/*   Updated: 2025/09/11 14:51:27 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include <unistd.h>

int	main()
{
	char	str[6] = "Hola";
	ft_strupcase(&str[0]);

	int	i = 0;
	while(str[i])
	{
		write(1,&str[i],1);
		i++;
	}
	write(1,"\n",1);
}
*/
