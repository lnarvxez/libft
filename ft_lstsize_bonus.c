/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:11:29 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/04/07 18:11:31 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
lst: el principio de la lista.
Cuenta el número de nodos de una lista.
*/
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*p;
	int		i;

	i = 0;
	p = lst;
	while (p != NULL)
	{
		i++;
		p = p -> next;
	}
	return (i);
}
