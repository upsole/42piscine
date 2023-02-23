/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:27:33 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/22 17:30:22 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATION_H

int	is_valid_base(char *s);
int	in_base(char c, char *base);
int	is_valid_lines(char **m, char *base, int len);
int	is_valid_map(t_map *map);

#endif
