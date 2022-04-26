/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:48:16 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/24 10:48:18 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*busca la primera aparición del carácter c (un carácter sin signo) en los 
primeros n bytes de la cadena a la que apunta, mediante el argumento s .*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		if (*p == (char)c)
			return (p);
		p++;
		n--;
	}
	return (NULL);
}
/*
int main()
{
    char s[] = "Hola mundo";
    
    char *ptr = ft_memchr(s,'u',sizeof(s));
	char *ptr2 = memchr(s,'u',sizeof(s));
	printf ("\n\n Funcion ft_memchr \n");
    if (ptr != NULL)
    {
        printf ("Encontrado en : %ld.\n", ptr-s+1);
        printf ("Caracter encon:  %s\n", ptr);
    }
    else
    {
        printf ("La busqueda no funciona");
    }
	printf ("\n\n Funcion memchr \n");
    if (ptr != NULL)
    {
        printf ("Encontrado en : %ld.\n", ptr-s+1);
        printf ("Caracter encon:  %s\n", ptr);
    }
    else
    {
        printf ("La busqueda no funciona");
    }
    return 0;
}*/
