/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:27:15 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/09 11:21:49 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
//int	main(int ac, char **av)
//{
//	if (ac != 4)
//		return (1);
//	char	*np;
//
//	np = ft_strncpy(av[1], av[2], atoi(av[3]));
////	np = strncpy(av[1], av[2], atoi(av[3]));
//	printf("%s\n", av[1]);
//	printf("%s", np);
//}
