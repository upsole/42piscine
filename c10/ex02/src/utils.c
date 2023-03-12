/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*   filename.vim                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upsol   <email@email.com>		             +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 19:39:01 by upsol             #+#    #+#             */
/*   Updated: 2018/05/09 17:07:46 by upsol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	is_space(char s)
{
	return ((s > 8 && s < 14) || s == 32);
}

void	ft_putstr(const char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		write(1, &s[i], 1);
}

int	ft_atoi_positive(char *s)
{
	int	x;
	int	i;

	i = 0;
	x = 0;
	while (is_space(s[i]))
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		x = x * 10 + (s[i] - '0');
		i++;
	}
	return (x);
}
