/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:18:57 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/04/07 20:18:58 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
lst: la dirección de un puntero a un nodo. del: un puntero a función utilizado
para eliminar el contenido de un nodo.
Elimina y libera el nodo ’lst’ dado y todos los consecutivos de ese nodo
utilizando la función ’del’ y free Al final, el puntero a la lista debe ser NULL
*/
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	while (*lst)
	{
		aux = (*lst)-> next;
		ft_lstdelone (*lst, del);
		(*lst) = aux;
	}
}
