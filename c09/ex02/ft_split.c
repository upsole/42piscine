/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:25:23 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/18 14:58:45 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	if (!*charset && !c)
		return (1);
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *s, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (is_separator(s[i + 1], charset) && !is_separator(s[i], charset))
			words++;
		i++;
	}
	return (words + 1);
}

char	*strcpy_sep(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (!is_separator(src[i], charset))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**m;
	int		i;
	int		j;
	int		k;

	m = malloc((count_words(str, charset) + 1) * sizeof(char *));
	i = 0;
	k = 0;
	while (str[i])
	{
		if (is_separator(str[i], charset))
			i++;
		else
		{
			j = 0;
			while (!is_separator(str[i + j], charset))
				j++;
			m[k] = malloc((j + 1) * sizeof(char));
			m[k] = strcpy_sep(m[k], str + i, charset);
			k++;
			i += j;
		}
	}
	m[k] = 0;
	return (m);
}
