/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:47:35 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/21 15:47:37 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
1 si es printiable, 0 si no
*/
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
	printf("%d", ft_isprint(30));
}*/
