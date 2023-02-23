/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algomap.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeorella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:17:13 by jeorella          #+#    #+#             */
/*   Updated: 2023/02/22 12:22:12 by jeorella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGOMAP_H
# define ALGOMAP_H

void	ft_final_map(char **arr, int max);
void	ft_correct_map(char **arr, int max);
void	ft_fill_map(char **arr, int i_n, int j_n, int max);
int		ft_square_loop(char **arr, int max);
char	**ft_algorithm(t_map *new_map);
#endif
