/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 11:21:47 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/08 21:17:15 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_upper(char c)
{
	return (c > 64 && c < 91);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_upper(str[i]) != 1)
			return (0);
		i++;
	}
	return (1);
}
//int	main(int ac, char **av)
//{
//	int	i = 1;
//	if (ac < 2)
//		return (-1);
//
//	while (i < ac)
//	{
//		printf("%s %d\n", av[i], ft_str_is_uppercase(av[i]));
//		i++;
//	}
//
//	return (0);
//}
