/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 01:00:23 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/09 16:01:55 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l1;
	unsigned int	l2;
	unsigned int	i;
	int				j;

	l1 = ft_strlen(dest);
	l2 = ft_strlen(src);
	if (size < l1)
		return (l2 + size);
	i = l1;
	j = 0;
	if (i < size)
	{
		while (i < (size - 1) && src[j])
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (l1 + l2);
}
//int	main(int ac, char **av)
//{
//	if (ac < 4)
//		return (1);
//	printf("Original %s\n", av[1]);
//	char flag = 0;
//	if (av[4] && av[4][0] == 'o')
//		flag = 1;
//	if (flag)
//	{
//		printf("strlcat %d\n", strlcat(av[1], av[2], atoi(av[3])));
//		printf("strlcat: %s\n", av[1]);
//	} else 
//	{
//		printf("ft_strlcat: %d\n", ft_strlcat(av[1], av[2], atoi(av[3])));
//		printf("ft_strlcat: %s\n", av[1]);
//	}
//}
