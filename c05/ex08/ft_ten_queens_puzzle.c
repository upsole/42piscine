/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:01:45 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/21 00:33:47 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_valid(int arr[10], int x, int y)
{
	int	i;

	i = -1;
	while (++i < x)
		if (y == arr[i] || i + arr[i] == x + y || i - arr[i] == x - y)
			return (0);
	return (1);
}

void	f(int arr[10], int *counter, int pos)
{
	int	i;
	int	j;

	if (pos == 10)
	{
		*counter += 1;
		j = -1;
		while (++j < 10)
			ft_putchar(arr[j] + '0');
		ft_putchar('\n');
	}
	else
	{
		i = -1;
		while (++i < 10)
		{
			if (is_valid(arr, pos, i))
			{
				arr[pos] = i;
				f(arr, counter, pos + 1);
			}
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int		arr[10];
	int		i;
	int		counter;

	i = 0;
	while (i < 10)
		arr[i++] = -1;
	counter = 0;
	f(arr, &counter, 0);
	return (counter);
}
