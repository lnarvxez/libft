/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:57:38 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/22 11:57:43 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
copia un bloque de memoria de n bytes desde la ubicacion que apunta src
directamente al bloque de memoria al que apunta el dest.
no verifica el nulo al final
Devuelve destino
*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*pdest;
	char	*psrc;
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	pdest = (char *)dest;
	psrc = (char *)src;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (pdest);
}
/*
int main()
{
    const char src[50] = "si guarda";
   char dest1[50] = "no";
   char dest2[50] = "no";

   printf("antes = %s\n", dest1);
   memcpy(dest1, src, 5);
   printf("despues = %s\n mia :\n", dest1);

    printf("antes = %s\n", dest2);
   ft_memcpy(dest2, src, 5);
   printf("despues = %s\n", dest2);

   
   return(0);
}*/
