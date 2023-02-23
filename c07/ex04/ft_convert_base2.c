/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:02:03 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/18 15:52:19 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	error_len(char *s);

int	digits(int x, int base_len)
{
	int				i;
	unsigned int	n;

	i = 0;
	n = x;
	if (x == 0)
		return (1);
	if ((x < 0) && ++i)
		n = -x;
	while (n && ++i)
		n /= base_len;
	return (i);
}

char	*ft_itoa_base(int x, char *base)
{
	int				i;
	int				base_len;
	char			*s;
	unsigned int	tmp;

	base_len = error_len(base);
	i = digits(x, base_len);
	s = malloc((i + 1) * sizeof(char));
	tmp = x;
	if (x < 0)
	{
		tmp = -x;
		s[0] = '-';
	}
	s[i] = 0;
	if (!tmp)
		s[--i] = base[0];
	while (tmp)
	{
		s[--i] = base[(tmp % base_len)];
		tmp /= base_len;
	}
	return (s);
}
