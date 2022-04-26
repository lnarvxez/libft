/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:39:12 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/22 12:39:15 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
copia los vaores de n bytes desde la ubicacion señalada por src al bloque de 
memoria señalada por el dest, la copia se reliza como si se utilizara un buffer
intermedio, lo que permite que ell destino y el origen se superpongan.
No verifica el caracter nulo al final
Devuelve destino.
*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*pdest;
	char	*psrc;
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	pdest = (char *)dest;
	psrc = (char *)src;
	if (pdest > psrc && (psrc + n > pdest))
	{
		pdest = pdest + n - 1;
		psrc = psrc + n - 1;
		while (n--)
			*pdest-- = *psrc--;
	}
	else
		while (n--)
			*pdest++ = *psrc++;
	return (dest);
}
/*
int main()
{
    const char src[50] = "si guarda";
   char dest1[50] = "no";
   char dest2[50] = "no";

   printf("antes = %s\n", dest1);
   memmove(dest1, src, 2);
   printf("despues = %s\n mia :\n", dest1);

    printf("antes = %s\n", dest2);
   ft_memmove(dest2, src, 2);
   printf("despues = %s\n", dest2);

   
   return(0);
}
*/