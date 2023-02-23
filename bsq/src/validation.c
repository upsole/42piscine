/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validators.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:26:31 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/22 17:30:40 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s_map.h"

int	is_valid_base(char *s)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (!('0' <= s[i] && s[i] <= '9'))
		return (0);
	while ('0' <= s[i] && s[i] <= '9')
		i++;
	j = i;
	while (s[j] > 31 && s[j] < 127)
	{
		k = j + 1;
		while (s[k])
		{
			if (s[j] == s[k])
				return (0);
			k++;
		}
		j++;
	}
	if ((j - i) < 3)
		return (0);
	return (1);
}

int	in_base(char c, char *base)
{
	int	i;
	int	j;

	i = 0;
	while ('0' <= c && c <= '9')
		i++;
	j = i;
	while (j < 4)
	{
		if (c == base[j])
			return (1);
		j++;
	}
	return (0);
}

int	is_valid_lines(char **m, char *base, int len)
{
	int	i;
	int	j;

	if (!len)
		return (0);
	i = 0;
	while (m[i])
	{
		j = 0;
		while (m[i][j])
		{
			if (!in_base(m[i][j], base))
				return (0);
			j++;
		}
		if (j != len)
			return (0);
		i++;
	}
	return (1);
}

int	is_valid_map(t_map *map)
{
	if (!is_valid_base(map->base))
		return (0);
	if (!is_valid_lines(map->lines, map->base, map->len))
		return (0);
	if (check_n_lines(map))
		return (0);
	return (1);
}
