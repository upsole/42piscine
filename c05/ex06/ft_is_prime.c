/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:44:08 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/13 13:51:12 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	square(int x)
{
	return (x * x);
}

int	smallest_div(int x)
{
	int	i;

	if (x % 2 == 0)
		i = 2;
	else
		i = 3;
	while (i < x)
	{
		if (square(i) > x)
			return (x);
		if (x % i == 0)
			return (i);
		i += 2;
	}
	return (x);
}

int	ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	return (smallest_div(nb) == nb);
}
