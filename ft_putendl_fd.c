/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:27:21 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/04/05 20:27:22 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
escribe un string en el file directory agregando un salto de linea
*/
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (fd >= 0 && s)
	{
		while (s[i] != '\0')
		{
			write(fd, &s[i], 1);
			i++;
		}
		write (fd, "\n", 1);
	}
}
