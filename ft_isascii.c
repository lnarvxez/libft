/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:34:05 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/21 15:34:07 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
1 si es ascii, 0 si no
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int main()
{
	printf("%d", ft_isascii(33));
}
*/
