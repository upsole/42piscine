/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:46:25 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/22 16:38:53 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s_map.h"
#include "strings.h"
#include "file.h"

void	map_error(void)
{
	ft_putstr("map error\n");
}

int	main(int ac, char **av)
{
	int		i;
	char	*s;
	t_map	*t;

	if (ac < 2)
	{
		t = init_map(ft_scan());
		if (!t)
			map_error();
		else
			map_print(t->lines);
		return (0);
	}
	i = 1;
	while (i < ac)
	{
		s = ft_read(av[i]);
		t = init_map(s);
		if (!t)
			map_error();
		else
			map_print(t->lines);
		i++;
	}
	return (0);
}
