/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:58:52 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/13 11:08:07 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	x;

	if (power < 0)
		return (0);
	x = 1;
	i = 0;
	while (i < power)
	{
		x = x * nb;
		i++;
	}
	return (x);
}
