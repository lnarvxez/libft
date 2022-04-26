/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:55:39 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/04/05 20:55:40 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
escribe un numero dado en un file directory dado 
*/
#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long	nbr;
	char	c;

	nbr = nb;
	if (nbr >= -2147483648 || nbr <= 2147483647)
	{
		if (nbr < 0)
		{
			write (fd, "-", 1);
			nbr = nbr * -1;
		}
		if (nbr >= 10)
		{
			ft_putnbr_fd(nbr / 10, fd);
			nbr = nbr % 10;
		}
		if (nbr < 10)
		{
			c = nbr + '0';
			write (fd, &c, 1);
		}
	}
}
/*
int main ()
{
	ft_putnbr_fd(-2147483648,1);
}*/