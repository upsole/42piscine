/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:48:13 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/04 14:44:41 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (--size > i)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
	}
}
//int	main(void)
//{
//	int a[6] = {1,2,3,4,5,6};
//	ft_rev_int_tab(a, 6);
//	int i = -1;
//	while (++i < 6)
//	{
//		printf("%d\n", a[i]);
//	}
//}
