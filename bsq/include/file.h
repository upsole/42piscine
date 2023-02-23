/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:33:17 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/22 15:37:21 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H

void	ft_putstr(char *s);
char	*ft_read(char *filename);
char	*ft_scan(void);
char	**read_map(char *filename);
#endif
