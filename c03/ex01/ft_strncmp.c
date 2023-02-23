/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:10:32 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/09 23:28:56 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				val;

	i = 0;
	if (!n)
		return (0);
	while (i < n)
	{
		val = s1[i] - s2[i];
		if (val || !(s1[i] && s2[i]))
			return (val);
		i++;
	}
	return (val);
}
//int	main(int ac, char **av)
//{
//	if (ac != 4)
//		return (1);
//	printf("strncmp: %d", strncmp(av[1], av[2], atoi(av[3])));
//	printf("\n");
//	printf("ft_strncmp: %d", ft_strncmp(av[1], av[2], atoi(av[3])));
//}
