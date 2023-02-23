/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:02:50 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/02 09:11:01 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_num(char c, char d, char u)
{
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(u);
}

void	print_separator(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	while (c < 58)
	{
		d = c + 1;
		while (d < 58)
		{
			u = d + 1;
			while (u < 58)
			{
				print_num(c, d, u);
				if (c != '7')
				{
					print_separator();
				}
				u++;
			}
			d++;
		}
		c++;
	}
	return ;
}
