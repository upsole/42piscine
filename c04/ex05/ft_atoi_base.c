/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:10:51 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/12 16:07:31 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char s)
{
	return ((s > 8 && s < 14) || s == 32);
}

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
	while (is_space(str[i]))
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
