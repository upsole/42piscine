/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:09:29 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/03 13:54:43 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	compare(int a, int b)
{
	return (a > b);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = -1;
	while (++i < size)
	{
		if (compare(tab[i], tab[i + 1]))
		{
			tmp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = tmp;
			i = -1;
		}
	}
}
