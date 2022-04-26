/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:08:22 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/28 15:08:24 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
localiza donde se ubica la cadena to_find en str dentro del rango en de len
y escribre la cadena apartir de la aparicon de to_find
*/
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	if (!*str && !*to_find)
		return ("");
	while (*str)
	{
		if (len < ft_strlen(to_find) || ft_strlen(str) < ft_strlen(to_find))
			return (NULL);
		if (ft_memcmp(str, to_find, ft_strlen(to_find)) == 0)
			return ((char *)str);
		len--;
		str++;
	}
	return (NULL);
}
/*
int main(void)
{
    char str[] = "hola como estas";
	char to_find[] = "l";
	printf("%s\n", ft_strnstr(str, to_find,3));
	printf("%s\n", strnstr(str, to_find , 3));
	return (0);
}*/
