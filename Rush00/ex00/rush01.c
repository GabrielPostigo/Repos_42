/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilji <zilji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:01:32 by ldazzani          #+#    #+#             */
/*   Updated: 2025/09/09 13:42:16 by zilji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_is_number(char *number)
{
	int	i;

	if (!number || number[0] == '\0')
		return (0);
	i = 0;
	while (number[i])
	{
		if (number[i] < '0' || number[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*
ft_is_number comprueba si metemos un numero como argumento.
Los argumentos son siempre char por eso se pone simple comillas;
para que lo compruebe en el ascii.
Si no hay !number o esta vacía == '\0' devolvera 0 que es falso.
Igualamos la posicion inicial a cero, y comprobamos si esta entre 0 y 9;
si esta fuera de 0 y 9 en el ASCII dara 0 y si esta bien dara 1.
*/

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

/*
i será la posición y result el resultado ya imprimido.
Mientras este entre cero y nueve creara un bucle;
como habreis visto, result es igual a cero. Un ejemplo de la logica;
Quiero imprimir 123; pillaria primero el 1, 
result = 0 x 10 + 1 - 0; dando 1.
Ahora result seria 1; Seguimos con dos;
1 = 1 x 10 + 2 - 0; dando 12; Seguimos con 3;
12 = 12 x 10 + 3 - 0; dando 123.
Le ponemos - '0' para pasarlo de ascii a entero,
quitandole su valor ascii. Al final devolvemos el result en int. 
*/

void	ft_print_map(int x, int y, int row, int col)
{
	if ((col == 1 && row == 1)
		|| (col == x && row == y && x != 1 && y != 1))
		ft_putchar('/');
	else if ((col == 1 && row == y) || (col == x && row == 1))
		ft_putchar('\\');
	else if (row == 1 || row == y || col == 1 || col == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
	col++;
}

/*
ft_print_map es un auxiliar que he creado porq no cabía;
La primera condición imprime '/' 
EN LA FILA UNO POSICION UNO Y COLUMNA UNO POSICION UNO;
o ULTIMA COLUMNA POSICION 1 Y CUMPLA LA CONDICION DE QUE
HALLA MAS DE UNA FILA, por eso x != 1,
para que la segunda condición pueda funcionar, 
en el segundo, en caso de que no se cumpla la primera condicion,
imprimira \ en LA PRIMERA COLUMNA ULTIMA FILA;
o ULTIMA COLUMNA PRIMERA POSICIÓN DE LA FILA;
El tercero, imprime * EN CUALQUIERAS DE LAS CONDICIONES QUE SE CUMPLA;
YA SEA FILA UNO, FILA UNO ULTIMA POSICION, COLUMNA UNO, COLUMNA UNO
ULTIMA POSICION;
El ultimo imprime espacio en caso de que no entre
en ningunas de las condiciones, OSEA IMPRIME ESPACIO.
*/

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x <= 0 || y <= 0)
		write (1, "Error\n", 6);
	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			ft_print_map(x, y, row, col);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

/*
en esta, la primera condición comprueba si los num son negativos;
ya entramos en while, mientras q la fila no llega a la ultima posición
entraremos en bucle, declaramos primero que hay una cola por cojones;
creamos dentro creamos otra condicion, si la fila no llega a la ultima posicion;
ya va a printear la funcion auxiliar de ft_print_map;
al printear aumenta la col una posición, sale del primer buclea, agrega
otra fila y el bucle sigue hasta que lo iguala el row con x y col con y.
*/
