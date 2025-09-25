/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilji <zilji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:01:08 by ldazzani          #+#    #+#             */
/*   Updated: 2025/09/08 22:48:09 by zilji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*Sirve para imprimir un caracter;
El primer 1 es el stdout;
El &c puntero, donde apunta a la dirección de los datos que se quieren escribir;
El ultimo 1 es para la cantidad de bits que se va a imprimir*/