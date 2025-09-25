/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilji <zilji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:01:43 by ldazzani          #+#    #+#             */
/*   Updated: 2025/09/09 00:22:10 by zilji            ###   ########.fr       */
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
			if ((col == 1 && row == 1) || (col == 1 && row == y))
				ft_putchar('A');
			else if ((col == x && row == 1) || (col == x && row == y))
				ft_putchar('C');
			else if (row == 1 || row == y || col == 1 || col == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
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
dentro creamos otra condicion, donde si la fila no llega a la ultima posicion;
empieza a mostrar las condiciones siguientes =
La primera condición imprime 'A' 
en la PRIMERA FILA PRIMERA COLA POSICION UNA;
o PRIMERA COLA POSICION UNO EN LA ULTIMA FILA;
en el segundo, en caso de que la primera condicion no se cumpla,
imprimira C EN LA ULTIMA COLA PRIMERA FILA;
O ULTIMA COLA Y ULTIMA FILA;
La 3a imprimirá el B EN CUALQUIERAS DE LAS CONDICIONES QUE SE CUMPLA;
YA SEA FILA UNO, FILA UNO ULTIMA POSICION, COLUMNA UNO, COLUMNA UNO
ULTIMA POSICION;
El ultimo imprime espacio en caso de que no entre
en ningunas de las condiciones, OSEA QUE IMPRIME EL CENTRO.
al printear aumenta la col una posición, sale del primer buclea, agrega
otra fila y el bucle sigue hasta que lo iguala el row con x y col con y.
*/