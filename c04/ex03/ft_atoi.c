/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 22:21:46 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/12 16:03:58 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char s)
{
	return ((s > 8 && s < 14) || s == 32);
}

int	ft_atoi(char *str)
{
	int	i;
	int	x;
	int	sign;

	x = 0;
	i = 0;
	sign = 1;
	while (is_space(str[i]))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		x = (str[i] - '0') + x * 10;
		i++;
	}
	return (x * sign);
}
