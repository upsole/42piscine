/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 01:10:13 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/08 23:57:32 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				val;

	i = 0;
	while (i < n)
	{
		val = s1[i] - s2[i];
		if (val)
			return (val);
		i++;
	}
	return (val);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	lfind;
	int	lstr;

	if (!*to_find)
		return (str);
	lfind = ft_strlen(to_find);
	while (*str)
	{
		lstr = ft_strlen(str);
		if (lfind > lstr)
			return (0);
		if (!ft_strncmp(str, to_find, lfind))
			return (str);
		str++;
	}
	return (0);
}
//
//int	main(int ac, char **av)
//{
//	if (ac < 2)
//		return (1);
//
//	printf("%s", strstr(av[1], av[2]));
//	printf("\n");
//	printf("%s", ft_strstr(av[1], av[2]));
//}
