/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:43:08 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/13 22:20:52 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;

	if (max <= min)
		return (0);
	a = malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
//int	main(int ac, char **av)
//{
//	int	*a;
//	int	j;
//	int	i;
//	if (ac != 3)
//		return (1);
//
//	a = ft_range(atoi(av[1]), atoi(av[2]));
//	i = 0;
//	j = atoi(av[1]);
//	while (j < (atoi(av[2])))
//	{
//		printf("%d ", a[i]);
//		i++;
//		j++;
//	}
//}
