/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:09:02 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/04/07 20:09:03 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
lst: el nodo a liberar. del: un puntero a la función utilizada para liberar
el contenido del nodo.
Toma como parámetro un nodo ’lst’ y libera la memoria del contenido utilizando
la función ’del’ dada como parámetro, además de liberar el nodo. La memoria de 
’next’ no debe liberarse.
*/
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst -> content);
	free(lst);
}
