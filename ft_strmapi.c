/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:29:32 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/04/05 17:09:12 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
s: la sring a iterar
f: la funcion a aplicar a cada caracter
se devuelve la cadena creada con el correcto uso de f sobre cada caracter
NUll si falla a reserva de memoria.
A cada caracter de 's' aplica la funcion 'f' dando como parametros el indice
de cada cracter dentro de 's' y el propio caracter. Genera una nueva string
con el resultado del uso sucesivo de 'f'.
*/
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	i;

	if (!f || !s)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
char f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

int main()
{
	char str1[] = "abc";
	char *str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}
*/