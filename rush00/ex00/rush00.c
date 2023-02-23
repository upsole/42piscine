/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:39:30 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/04 16:26:57 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_unit(int x, int y, int col, int row)
{
	char	c;

	c = ' ';
	if (row == 0 || row == y - 1)
	{
		c = '-';
		if (col == 0 || col == x - 1)
			c = 'o';
	}
	else if (col == 0 || col == x - 1)
	{
		c = '|';
	}
	ft_putchar(c);
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	if (x < 0 || y < 0)
		return ;
	col = 0;
	row = 0;
	while (row < y)
	{
		while (col < x)
		{
			print_unit(x, y, col, row);
			col++;
		}
		row++;
		ft_putchar('\n');
		col = 0;
	}
}
