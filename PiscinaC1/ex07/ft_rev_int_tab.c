/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:38:24 by gapostig          #+#    #+#             */
/*   Updated: 2025/09/09 16:34:36 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_change(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_change(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}

/*
#include <stdio.h>
int main(void)
{
	int	ar[] = {1,2,3,4};
	int s = 4;

	int i = 0;

	ft_rev_int_tab(ar,s);
	
	while (i < s){
		printf("%i",ar[i]);
		i++;
	}
	return (0);
}
*/
