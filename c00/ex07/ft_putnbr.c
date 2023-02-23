/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:23:27 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/06 12:42:40 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ingenieria(void)
{
	char	*s;
	int		i;

	s = "-2147483648";
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char	c;
	int		n;

	if (nb == -2147483648)
	{
		ft_ingenieria();
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	c = nb % 10 + '0';
	n = nb / 10;
	if (n)
	{
		ft_putnbr(n);
		ft_putchar(c);
		return ;
	}
	ft_putchar(c);
}
//
//int	main(void)
//{
//	ft_putnbr(-2147483648);
//	ft_putchar('\n');
//	ft_putnbr(150);
//	ft_putchar('\n');
//	ft_putnbr(-2147483647);
//	ft_putchar('\n');
//	return (0);
//}
