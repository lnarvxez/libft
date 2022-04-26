/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:39:22 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/04/07 18:39:24 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Devuelve el último nodo de la lista.*/
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lstaux;

	if (!lst)
		return (NULL);
	lstaux = lst;
	while (lstaux -> next != NULL)
		lstaux = lstaux -> next;
	return (lstaux);
}
