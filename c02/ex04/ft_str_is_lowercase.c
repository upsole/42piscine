/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 11:18:06 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/08 21:17:03 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_lower(char c)
{
	return (c >= 97 && c <= 122);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_lower(str[i]) != 1)
			return (0);
		i++;
	}
	return (1);
}
//
//int	main(int ac, char **av)
//{
//	if (ac < 2)
//		return (1);
//	int	i = 1;
//
//	while (i < ac)
//	{
//		printf("%s %d\n", av[i], ft_str_is_lowercase(av[i]));
//		i++;
//	}
//}
