/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:23:40 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/21 15:28:09 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
1 si es alphanumeric, 0 si no
*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int main ()
{
	printf("%d", ft_isalnum(47));
}
*/