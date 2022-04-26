/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnarvaez <lnarvaez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:26:22 by lnarvaez          #+#    #+#             */
/*   Updated: 2022/04/05 11:26:24 by lnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
s:  La string a separar
c: el caracter delimitador
Reservar un array de strings resutante de separar a string 's' en substrings
utilizando el caracter 'c' como delimitador. El array debe terminar con un
puntero null.
*/
#include "libft.h"

static int	ft_count(const char *str, char c)
{
	int	indicador;
	int	i;

	i = 0;
	indicador = 0;
	if (!str)
		return (0);
	while (*str)
	{
		if (*str != c && indicador == 0)
		{
			indicador = 1;
			i++;
		}
		else if (*str == c)
			indicador = 0;
		str++;
	}
	return (i);
}

static void	ft_error(char **split, const char *str, char c)
{
	int	i;

	i = 0;
	while (i < ft_count(str, c))
		free(split[i]++);
	free (split);
}

char	**ft_split(const char *str, char c)
{
	size_t	i;
	int		j;
	int		index;
	char	**split;

	split = (char **)malloc(sizeof(char *) * (ft_count(str, c) + 1));
	if (!split)
		return (NULL);
	i = -1;
	j = 0;
	index = -1;
	while (++i <= ft_strlen(str))
	{
		if (str[i] != c && index == -1)
			index = i;
		else if ((str[i] == c || i == ft_strlen(str)) && index >= 0)
		{
			split[j++] = ft_substr(str, index, i - index);
			if (!split)
				ft_error(split, str, c);
			index = -1;
		}
	}
	split[j] = 0;
	return (split);
}
/*
void	ft_putstr(char const *s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			write (1, &s[i], 1);
			i++;
		}
	}
}
int main() {
	char  **res;
	int  i;

	i = 0;
	res = ft_split("hola.como.estas.soy.leo",'.');
    while (res[i])
	{
		ft_putstr(res[i]);
		write(1, "\n", 1);
		i++;
	}
}
*/
