/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:49:17 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/22 12:49:20 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Hace minusculas*/
#include "libft.h"

int	ft_toupper(int c)
{
	int	i;

	i = 0;
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
/*
int main ()
{
	printf("%c", ft_toupper('d'));
}*/