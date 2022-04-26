/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:42:59 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/29 13:43:02 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
devuelve un puntero a una nueva cadna que es un duplicadp de la cadena s1
se reserva memoria con malloc
*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*res;
	size_t	i;

	i = 0;
	len = ft_strlen(s1);
	if (!s1)
		return (NULL);
	res = (char *)malloc (len + 1);
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = 0;
	return (res);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
 
    char src[] = "Hola soy Leo";
    char *rs = ft_strdup(src);
	printf("%s", rs);
    return 0;
}*/