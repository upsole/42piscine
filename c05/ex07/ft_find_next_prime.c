/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07ft_find_next_prime.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:53:23 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/21 17:36:21 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	smallest_div(int x)
{
	int	i;

	if (x % 2 == 0)
		i = 2;
	else
		i = 3;
	while (i <= x / i)
	{
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

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
