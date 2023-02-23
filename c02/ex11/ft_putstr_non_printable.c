/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:57:17 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/11 17:32:58 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_hex(int x, int prev)
{
	char	*base;

	base = "0123456789abcdef";
	if (x > 15)
	{
		put_hex(x / 16, 0);
		put_hex(x % 16, 0);
		return ;
	}
	if (prev)
		ft_putchar('0');
	ft_putchar(base[x]);
}

void	ft_putstr_non_printable(unsigned char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			put_hex(str[i], str[i] < 16);
		}
		i++;
	}
}
