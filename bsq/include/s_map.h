/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_map.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:37:34 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/22 17:32:30 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_MAP_H
# define S_MAP_H

typedef struct s_map
{
	char	*base;
	char	**lines;
	int		n_lines;
	int		len;
}	t_map;
void	map_print(char **m);
t_map	*init_map(char *filename);
int		check_n_lines(t_map *map);
#endif
