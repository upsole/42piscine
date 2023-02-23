/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 23:06:12 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/13 14:26:40 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	val;

	i = 0;
	while (s1[i] && s2[i])
	{
		val = (s1[i] - s2[i]);
		if (val)
			return (val);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int		i;
	char	*tmp;

	if (ac < 2)
		return (1);
	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			tmp = av[i + 1];
			av[i + 1] = av[i];
			av[i] = tmp;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		write(1, &"\n", 1);
		i++;
	}
	return (0);
}
