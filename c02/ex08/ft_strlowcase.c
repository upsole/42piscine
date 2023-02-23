/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:16:21 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/08 11:33:25 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_upper(char c)
{
	return (c >= 65 && c <= 90);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_upper(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
//int	main(int ac, char **av)
//{
//	if (ac < 2)
//		return (1);
//	int	i = 1;
//	while (i < ac)
//	{
//		printf("%s ", av[i]);
//		printf("%s\n", ft_strlowcase(av[i]));
//		i++;
//	}
//}
