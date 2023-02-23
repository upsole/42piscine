/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:51:32 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/18 09:41:36 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*s;

	i = 0;
	while (src[i])
		i++;
	s = malloc(sizeof(src) * i);
	if (s)
	{
		i = 0;
		while (src[i])
		{
			s[i] = src[i];
			i++;
		}
		s[i] = 0;
		return (s);
	}
	return (0);
}
