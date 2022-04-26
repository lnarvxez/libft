/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:13:37 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/04/05 17:13:45 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
s: la string a iterar
f: la funcion que se aplica sobre cada caracter
a cada caracter de la string 's' se aplica la funcion 'f' dando como parametros
el inice de cada caracter dentro de 's' y a direccion del propio caracter, que
podra modificarse si es necesario.
*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;
	size_t	len;

	if (f != NULL && s != NULL)
	{
		len = ft_strlen(s);
		i = 0;
		while (i < len)
		{
			f(i, s);
			s++;
			i++;
		}
	}
}
