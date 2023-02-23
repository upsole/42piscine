/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 23:46:16 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/17 11:41:54 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	total_size(int size, char **strs, char *sep)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (i < size - 1)
	{
		x += ft_strlen(strs[i]);
		x += ft_strlen(sep);
		i++;
	}
	x += ft_strlen(strs[i]);
	return (x + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*s;

	s = malloc(total_size(size, strs, sep) * sizeof(char));
	i = 0;
	j = 0;
	while (j < size)
	{
		while (*strs[j])
			s[i++] = *strs[j]++;
		if (++j < size)
		{
			k = 0;
			while (sep[k])
			{
				s[i] = sep[k];
				k++;
				i++;
			}
		}
	}
	s[i] = 0;
	return (s);
}
