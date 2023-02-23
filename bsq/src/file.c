/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:42:47 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/22 16:42:14 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "strings.h"
#include "s_map.h"

void	ft_putstr(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}

char	*ft_read(char *filename)
{
	int		f;
	int		i;
	char	*s;

	i = 0;
	f = open(filename, O_RDONLY);
	while (read(f, &s, 1))
		i++;
	close(f);
	s = malloc((i + 1) * sizeof(char));
	f = open(filename, O_RDONLY);
	read(f, s, i);
	close(f);
	s[i] = 0;
	return (s);
}

char	*ft_scan(void)
{
	int		i;
	char	*s;
	char	*buf;

	buf = malloc(5000 * sizeof(char));
	i = 0;
	while (read(0, &s, 1))
	{
		buf[i] = (char) s;
		i++;
	}
	buf[i] = '\n';
	return (buf);
}

char	**read_map(char *s)
{
	char	**matrix;

	matrix = ft_split(s);
	return (matrix);
}
