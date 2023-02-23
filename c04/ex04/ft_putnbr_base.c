/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 00:25:03 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/12 11:12:22 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	len;
	unsigned int	x;

	x = nbr;
	len = error_len(base);
	if (len < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		x = -nbr;
	}
	if (x >= len)
	{
		ft_putnbr_base(x / len, base);
		ft_putnbr_base(x % len, base);
		return ;
	}
	ft_putchar(base[x]);
}
