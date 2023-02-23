/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 23:24:01 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/13 23:46:02 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	*range = malloc(len * sizeof(int));
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}
//int	main(void)
//{
//	int	*a;
//	int	i = 0;
//	int	len = ft_ultimate_range(&a, 5, 50);
//
//	while (i < len)
//	{
//		printf("%d ", a[i]);
//		i++;
//	}
//}
