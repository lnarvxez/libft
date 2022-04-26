/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:20:20 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/30 12:50:55 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
s1: La primera string
s2: La segunda string
devuelve la nueva string, null si falla la reserva de memoria.
devuelve una nueva string formada por la concatenacion de s1 y s2.
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		str[j++] = s2[i++];
	}
	str[j] = '\0';
	return (str);
}
/*
int main ()
{
	char *buf;

	buf = ft_strjoin("lorem ipsum","dolor sit amet");
	printf("Resultado: %s",buf);
	free(buf);
	return (0);
}*/
