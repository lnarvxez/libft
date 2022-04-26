/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:47:10 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/29 12:47:11 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Asigna espacio no utilizado para count, cada uno de los cuales tiene el tamaño
en bytes de size, el esapcio se inicializara a todos los bits 0.
*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	p = (void *)malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero (p, count * size);
	return (p);
}
/*
int main ()
{
	int size = 3;

	char * d1 = ft_calloc(size, 0);
	//char * d2 = calloc(size, sizeof(int));
	printf("\nmi: %s", d1);
	//printf("\nfu: %s", d2);
}*/