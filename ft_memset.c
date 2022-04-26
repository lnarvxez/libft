/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:56:35 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/21 15:56:37 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
establece el primer numero de bytes del bloque de memoria señalado por str
en c especcificado, n es el numero de bytes q se estableceran en c
*/
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)str;
	while (i < n)
	{
		*ptr = (char) c;
		i++;
		ptr++;
	}
	return (str);
}
/*
int main()
{
    char str[] = "hola como estas";
    size_t size = 4;
    printf("%s\n", str);
    ft_memset(str, 'x', size);
    printf("%s\n", str);
	memset(str, 'x', size);
    printf("%s\n", str);
}
*/