/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:50:23 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/03/30 12:50:29 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
s1: la string que debe ser recortada
set: los caracteres a eliminar de la string 
elimina todos los caracteres de la string 'set' desde el principio y desde el
final de 's1' hasta encontrar un caracter que no peertenezca a 'set'
la string resultante se devuelve con reserva en malloc
*/
#include "libft.h"

static int	ft_inset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	pri_pos;
	size_t	ult_pos;
	size_t	i;

	if (!s1)
		return (NULL);
	pri_pos = 0;
	ult_pos = ft_strlen(s1);
	while (s1[pri_pos] && ft_inset(set, s1[pri_pos]))
		pri_pos++;
	while (ft_inset(set, s1[ult_pos - 1]) && ult_pos - 1)
		ult_pos--;
	if (ult_pos < pri_pos)
		ult_pos = pri_pos;
	str = (char *)malloc(sizeof(char) * (ult_pos - pri_pos + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (ult_pos > pri_pos)
		str[i++] = s1[pri_pos++];
	str[i] = '\0';
	return (str);
}
/*
int main ()
{
	char *set = "\n \t";
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello   Please  \n \n \t\t\n  ";
	printf("%s",ft_strtrim(s1,set));
}*/
