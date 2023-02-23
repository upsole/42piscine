/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:01:54 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/18 15:40:20 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa_base(int x, char *base);

int	duplicate(char *s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = i + 1;
		while (s[j])
		{
			if (s[j] == s[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	error_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '+' || s[i] == '-' || s[i] < 32 || s[i] >= 127)
			return (0);
		i++;
	}
	if (duplicate(s))
		return (0);
	return (i);
}

int	get_id(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	x;
	int	sign;
	int	len;

	x = 0;
	i = 0;
	sign = 1;
	len = error_len(base);
	if (len < 2)
		return (0);
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (get_id(str[i], base) < len)
	{
		x = get_id(str[i], base) + x * len;
		i++;
	}
	return (x * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		x;
	char	*s;

	if (error_len(base_from) < 2 || error_len(base_to) < 2)
		return (0);
	x = ft_atoi_base(nbr, base_from);
	s = ft_itoa_base(x, base_to);
	if (!s)
		return (0);
	return (s);
}

//int	main(void)
//{
//	printf("%s ", ft_convert_base("FF", "012F3456789ABCDEF", "0123456789"));
//}
