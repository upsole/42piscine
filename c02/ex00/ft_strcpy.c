/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:54:04 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/08 11:31:42 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
//
//int	main(int ac, char **av)
//{
//	if (ac != 3)
//		return(1);
//
//	char	*np;
//	np = ft_strcpy(av[1], av[2]);
//	//np = strcpy(av[1], av[2]);
//	printf("%s\n", av[1]);
//	printf("%s", np);
//}
