/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:42:27 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/11 17:11:25 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_hex(unsigned long long x, int prev)
{
	char	*base;

	base = "0123456789abcdef";
	if (x > 15)
	{
		put_hex(x / 16, 0);
		put_hex(x % 16, 0);
		return ;
	}
	if (prev == 1)
		ft_putchar('0');
	ft_putchar(base[x]);
}

void	put_address(unsigned long long addr)
{
	int					i;
	unsigned long long	tmp;

	tmp = addr;
	i = 0;
	while (i < 15)
	{
		if (tmp < 16)
			ft_putchar('0');
		tmp /= 16;
		i++;
	}
	put_hex(addr, 0);
	ft_putchar(':');
}

void	ft_print_line(unsigned char *c, int size)
{
	int	i;

	i = -1;
	put_address((unsigned long long)c);
	while (++i < 16)
	{
		if (i % 2 == 0)
			ft_putchar(' ');
		if (i < size)
			put_hex((unsigned long long)*(c + i), 1);
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
	}
	ft_putchar(' ');
	i = -1;
	while (++i < size)
	{
		if (*(c + i) < 32 || *(c + i) >= 127)
			ft_putchar('.');
		else
			ft_putchar(*(c + i));
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char		*c;
	int					line;
	unsigned int		i;

	if (!size)
		return (0);
	i = 0;
	c = addr;
	while (i * 16 < size)
	{
		if (i < size / 16)
			line = 16;
		else
			line = size % 16;
		ft_print_line(c + (i * 16), line);
		ft_putchar('\n');
		i++;
	}
	return (addr);
}
// Parar si \0?
