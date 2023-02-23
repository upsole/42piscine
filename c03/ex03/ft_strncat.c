/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:05:15 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/08 23:45:26 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while ((j < nb) && src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
//int	main(int ac, char **av)
//{
//	if (ac != 4)
//		return (1);
////	printf("%s", strncat(av[1], av[2], atoi(av[3])));
//	printf("%s", ft_strncat(av[1], av[2], atoi(av[3])));
//}
