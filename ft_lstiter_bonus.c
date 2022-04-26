/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:30:56 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/04/07 19:30:57 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
lst: un puntero al primer nodo.
f: un puntero a la función que utilizará cada nodo.
Itera la lista ’lst’ y aplica la función ’f’ en el contenido de cada nodo.
*/
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
