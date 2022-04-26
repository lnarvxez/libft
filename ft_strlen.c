/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:49:39 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/21 15:49:41 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*funcion para saber la longitud de una cadena*/
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int main ()
{
	printf("%zu", ft_strlen("hola    9"));
}*/