/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:25:07 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/23 13:25:10 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Devuelve un puntero a la ultima aparicion de c en la cadena s.
*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	*p_s;
	int		a;

	p = NULL;
	p_s = (char *)s;
	a = ft_strlen(p_s);
	if ((char)c == 0)
		p = &p_s[a];
	while (--a >= 0)
	{
		if ((char)c == p_s[a])
		{
			p = &p_s[a];
			break ;
		}
	}
	return (p);
}
/*
int main ()
{
	char str[] = "leonardo";
	char *p;
	char *pun;
	int car = 't' + 256;

	p = strrchr(str, car);
	pun = ft_strrchr(str, car);
	printf ("\n**strrchr**\n");
	while (p != NULL)
	{
		printf("esta en %ld\n", p - str + 1);
		p = strrchr(p + 1, car);
	}
	printf ("\n**ft_strrchr**\n");
	while (pun != NULL)
	{
		printf("esta en %ld\n", pun - str + 1);
		pun = ft_strrchr(pun + 1, car);
	}	
}*/