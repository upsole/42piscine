/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:22:01 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/13 18:05:20 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				len;

	len = 0;
	while (src[len])
	{
		len++;
	}
	if (!size)
		return (len);
	i = 0;
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
int	main(int ac, char **av)
{
	if (ac != 4)
		return (1);
	printf("%s \n", av[1]);
	//printf("%d ", strlcpy(av[1], av[2], atoi(av[3])));
	printf("%d ", ft_strlcpy(av[1], av[2], atoi(av[3])));
	printf("%s \n", av[1]);
}
