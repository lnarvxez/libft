/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:00:02 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/22 13:00:04 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Hace minusculas*/
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}
/*
int main ()
{
	printf("%c", ft_tolower ('9'));
}*/
