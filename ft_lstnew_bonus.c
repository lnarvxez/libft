/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:27:07 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/04/07 13:27:10 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
content: el contenido con el que crear el nodo.
Crea un nuevo nodo utilizando malloc La variable miembro ’content’ se inicializa
con el contenido del parámetro ’content’ La variable ’next’, con NULL
*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*p;

	p = (t_list *)malloc(sizeof(t_list));
	if (!p)
		return (NULL);
	p -> content = content;
	p -> next = NULL;
	return (p);
}
