/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:54:26 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/23 15:54:27 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Compara las dos cadenas s1 y s2 compara como maximo los n bytes de ambas
< 0 si s1 es menor q s2
0 si s1 es igual q s2
> 0 si s1 es mayor que s2
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*s1_un;
	const unsigned char	*s2_un;
	size_t				i;

	i = 0;
	s1_un = ((const unsigned char *) s1);
	s2_un = ((const unsigned char *) s2);
	while ((s1_un[i] != '\0' || s2_un[i] != '\0') && i < n)
	{
		if (s1_un[i] != s2_un[i])
			return (s1_un[i] - s2_un[i]);
		i++;
	}
	return (0);
}
/*
int main (void)
{
	char str[] = "3";
	char str2[] = "2";
	int r;
	int r2;

	r = ft_strncmp(str, str2, 4);
	r2 = strncmp(str,str2, 4);
	printf("%d",r);
	printf("\n%d",r2);
}
*/
