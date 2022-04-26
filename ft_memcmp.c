/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:13:09 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/24 11:13:11 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Compara los caracteres en n
< 0 si s1 es menor q s2
0 si s1 es igual q s2
> 0 si s1 es mayor que s2
*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p_s1;
	const unsigned char	*p_s2;
	int					estado;

	p_s1 = (const unsigned char *)s1;
	p_s2 = (const unsigned char *)s2;
	estado = 0;
	while (n > 0)
	{
		estado = *p_s1 - *p_s2;
		if (estado != 0)
			break ;
		n--;
		p_s1++;
		p_s2++;
	}
	return (estado);
}
/*
int main()
{
    printf("Mi Funcion: %d",ft_memcmp("t\200", "t\1", 2));
	printf("\nFuncion:     %d",memcmp("t\200", "t\1", 2));
    return 0;
}*/