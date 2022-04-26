/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:18:58 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/23 14:11:32 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Busca pa posicion de la primera aparcicion del caracter c en s.
retorna el puntero a la posicion si la encuentra si no devuelve NULL*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		else
			s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*
int main ()
{
	char str[20] = "leo";
	char *p;
	char *pun;
	char car = 'g';

	p = strchr(str, car);
	pun = ft_strchr(str, car);
	printf ("\n**strchr**\n");
	printf("esta en %lu\n", p - str);
	printf ("\n**ft_strchr**\n");
	printf("esta en %lu\n", pun - str);
}
*/