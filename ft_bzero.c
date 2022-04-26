/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:05:40 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/22 13:05:43 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
borra los datos en los n bytes de memoria en la ubicacion señalada str con la 
cantidad señalada en n
*/
#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = 0;
		i++;
	}
}
/*
int main()
{
    char str[] = "hola como estas";
    size_t longitud = 4;
    printf("%s\n", str);
    ft_bzero(str, longitud);
    printf("%s\n", str);
}
*/