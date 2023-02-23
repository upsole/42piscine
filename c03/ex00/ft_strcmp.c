/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:55:01 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/08 23:37:16 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	val;

	i = 0;
	while (s1[i] && s2[i])
	{
		val = (s1[i] - s2[i]);
		if (val)
			return (val);
		i++;
	}
	return (s1[i] - s2[i]);
}
// TODO EMPTY CHAR && S2 > S1
//int	main(int ac, char **av)
//{
//	if (ac != 3)
//		return (1);
//
//	printf("strcmp: %d", strcmp(av[1], av[2]));
//	printf("\n");
//	printf("ft_strcmp: %d", ft_strcmp(av[1], av[2]));
//	return (0);
//}
