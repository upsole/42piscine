/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:30:35 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/22 09:39:22 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGS_H
# define STRINGS_H

int		ft_strlen(const char *s);
char	*ft_read(char *filename);
char	*line_cpy(char *dest, char *src);
int		count_lines(char *s);
char	**ft_split(char *str);
#endif
