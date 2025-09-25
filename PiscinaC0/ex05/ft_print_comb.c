/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapostig <gapostig@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 20:56:44 by gapostig          #+#    #+#             */
/*   Updated: 2025/09/04 18:49:58 by gapostig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	fun_write(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	n2 = '0';
	n3 = '0';
	while (n1 <= '7')
	{
		n2 = n1 + 1;
		while (n2 <= '8')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				fun_write(n1, n2, n3);
				if (!(n1 == '7' && n2 == '8' && n3 == '9'))
					write(1, ", ", 2);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}

/*
int main()
{
	ft_print_comb();
	return 0;
}
*/
