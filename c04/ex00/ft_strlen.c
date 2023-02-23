/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:36:27 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/08 20:36:30 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}
//
//int	main(int ac, char **av)
//{
//	if (ac < 2)
//		return (1);
//	int i = 1;
//	while (i < ac) 
//	{
//		printf("%s %d\n", av[i], ft_strlen(av[i]));
//		i++;
//	}
//}
