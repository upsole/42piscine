/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:39:26 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/22 09:41:09 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

int	count_lines(char *s)
{
	int	i;
	int	lines;

	i = 0;
	lines = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			lines++;
		i++;
	}
	return (lines + 1);
}

char	*line_cpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\n' && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	**ft_split(char *str)
{
	char	**m;
	int		i;
	int		j;
	int		k;

	m = malloc((count_lines(str) + 1) * sizeof(char *));
	i = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			i++;
		else
		{
			j = 0;
			while (str[i + j] != '\n')
				j++;
			m[k] = malloc((j + 1) * sizeof(char));
			m[k] = line_cpy(m[k], str + i);
			k++;
			i += j;
		}
	}
	m[k] = 0;
	return (m);
}
