/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:36:24 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/04/05 19:36:26 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
escribe un caracter dentro de un file directory dado
*/
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write (fd, &c, 1);
}
