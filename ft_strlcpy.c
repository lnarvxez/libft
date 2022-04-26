/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:57:13 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/21 15:57:17 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
copia hasta el tamaño - 1 caracteres de la cadena terminada en NUL src a dst
 terminando en NUL el resultado.*/
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	if (size == '\0')
	{
		return (l);
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (l);
}
/*
int	main (void)
{
	char src[4] = "Leo4";
	char dest[15] = "qwesdesdrfe";
	char dest2[15] = "qwesdesdrfe";
	size_t size;

	size = 2;
	size_t test = ft_strlcpy(dest, src, size);
	printf("src: %s\ndest: %s", src,dest);
	printf("\n%zu", test);
	printf("\n funci\n");
	size_t test2 = ft_strlcpy(dest2, src, size);
	printf("src: %s\ndest: %s", src,dest2);
	printf("\n%zu", test2);

	return (0);
}*/
