/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:57:34 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/21 16:57:36 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
devuleve la longitud total de la cadena que intentarom crear.
Agrega la cadena terminada en NULL src al final de dst. Agrega como maximo
el size - strlen (dest) -1, terminando en NULL el resultado.
*/
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_l;
	size_t	src_l;

	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);
	j = dest_l;
	i = 0;
	if (dest_l >= size)
		return (src_l + size);
	while (src[i] && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest_l + src_l);
}
/*
int main () {
	char src[20] = "bonjour";
	char dest[14] = "a";
	char dest2[14] = "a";
	size_t test1 = strlcat(dest, "lorem ipsum dolor sit amet", 6);
	size_t test2  = ft_strlcat(dest2, "lorem ipsum dolor sit amet", 6);
	printf("\nRes: %zu", test1);
	printf("\nMia: %zu", test2);
	return(0);
}*/