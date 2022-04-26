/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:35:10 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/04/07 20:35:11 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada nodo. 
Crea una lista resultante de la aplicación correcta y sucesiva de la función
’f’ sobre cada nodo. La función ’del’ se utiliza para eliminar el contenido 
de un nodo, si hace falta.*/
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstaux;
	t_list	*lstnew;

	if (!lst)
		return (NULL);
	lstnew = ft_lstnew(f(lst -> content));
	if (!lstnew)
		return (NULL);
	lstaux = lstnew;
	lst = lst -> next;
	while (lst)
	{
		lstnew -> next = ft_lstnew(f(lst ->content));
		if (!lstnew -> next)
			ft_lstclear(&lstaux, del);
		lstnew = lstnew -> next;
		lst = lst -> next;
	}	
	lstnew -> next = NULL;
	return (lstaux);
}
