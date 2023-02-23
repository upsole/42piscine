/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algomap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeorella <jeorella@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:42:45 by jeorella          #+#    #+#             */
/*   Updated: 2023/02/22 13:01:08 by jeorella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"
#include "s_map.h"
#include "strings.h"

void	ft_final_map(char **arr, int max)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (arr[i][j] != '\0')
	{
		j = 0;
		while (arr[i][j] != '\0')
		{
			if (arr[i][j] <= max && arr[i][j] != 'o')
				arr[i][j] = '.';
			j++;
		}
		i++;
	}
}

void	ft_correct_map(char **arr, int max)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	j = 0;
	flag = 0;
	while (arr[i][j] != '\0')
	{
		j = 0;
		while (arr[i][j] != '\0')
		{
			if (arr[i][j] == max && flag == 0)
			{
				while (i < max)
				{
					while (j < max)
					{
						arr[i][j] = 'x';
						j++;
					}
					i++;
				}
				flag = 1;
			}
		}
		j++;
	}
	i++;
}

void	ft_fill_map(char **arr, int i_n, int j_n, int max)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < max)
	{
		j = 0;
		while (j < max)
		{
			arr[i + i_n][j + j_n] = max;
			j++;
		}
		i++;
	}
}

int	ft_square_loop(char **arr, int max)
{
	int	i;
	int	j;
	int	i_n;
	int	j_n;
	int	count;
	int	flag;

	i = 0;
	j = 0;
	i_n = 0;
	j_n = 0;
	flag = 0;
	while (arr[i + i_n][j + j_n] != '\0')
	{
		j_n = 0;
		while (arr[i + i_n][j + j_n] != '\0')
		{
			count = 0;
			while (i < max && arr[i + i_n][j + j_n] != '\0')
			{
				j = 0;
				while (j < max && arr[i + i_n][j + j_n] != '\0')
				{
					if (arr[i + i_n][j + j_n] != 'o')
						count++;
					j++;
				}
				i++;
			}
			if (count == (max * max))
			{
				flag = 1;
				ft_fill_map(arr, i_n, j_n, max);
			}
			j_n++;
		}
		i_n++;
	}
	if (flag == 1)
	{
		max = max + 1;
		ft_square_loop(arr, max);
	}
	return (max);
}

char	**ft_algorithm(t_map *new_map)
{
	int	max_i;
	int	max_f;

	max_i = 1;
	max_f = ft_square_loop(new_map->lines, max_i);
	ft_correct_map(new_map->lines, max_f);
	ft_final_map(new_map->lines, max_f);
	return (new_map->lines);
}
