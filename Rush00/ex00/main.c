/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilji <zilji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:01:16 by ldazzani          #+#    #+#             */
/*   Updated: 2025/09/08 22:47:41 by zilji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);
int		ft_is_number(char *number);
int		ft_atoi(char *number);

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc != 3 || !ft_is_number(argv[1]) || !ft_is_number(argv[2]))
	{
		write (1, "Error\n", 6);
		return (1);
	}
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	rush(x, y);
	return (0);
}
/*
Llamamos a todas las funciones para que compile;
o sino el main no reconoce que es ft_is_number a secas;
argc es el contador de argumentos y doble puntero argv es el argumentos.
Por ejemplo ./a.out es un argumento;
y los los dos numeros que metemos son otros dos argumentos;
tiene doble puntero por que es un puntero que esta apuntando a otro puntero.
Si es ./a.out cuenta como un puntero y como estoy apuntando a ese puntero;
seria dos en todo caso.
En el if, comprobamos si tiene tres punteros,
y si son numeros los dos argumentos siguientes,
si no son argumentos marcará como error.
argv 1 como x, argv 2 como y, porque argv 0 es ./a.out.
(x, y) le decimos que van a ser los argumentos 1 y 2.
*/