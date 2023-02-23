/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_map.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:13:38 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/22 17:28:18 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "s_map.h"
#include "strings.h"
#include "file.h"
#include "validation.h"

t_map	*init_map(char *s)
{
	char	**m;
	int		i;
	t_map	*new_map;

	new_map = malloc(sizeof(t_map));
	m = read_map(s);
	if (!m)
		return (0);
	new_map->base = m[0];
	new_map->lines = ++m;
	i = 0;
	while (new_map->lines[i])
		i++;
	new_map->n_lines = i;
	new_map->len = ft_strlen(m[0]);
	if (!is_valid_map(new_map))
		return (0);
	return (new_map);
}

unsigned int	atoi_n(char *s, int n)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (i < n && ('0' <= s[i] || s[i] <= '9'))
	{
		x = (x * 10) + (s[i] - '0');
		i++;
	}
	return (x);
}

int	check_n_lines(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (map->base[i])
		i++;
	j = i - 3;
	i = atoi_n(map->base, j);
	return (i == map->n_lines);
}

void	map_print(char **m)
{
	int	i;

	i = 0;
	while (m[i])
	{
		ft_putstr(m[i]);
		write(1, "\n", 1);
		i++;
	}
}
