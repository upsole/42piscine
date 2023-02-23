/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 00:27:34 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/08 21:16:58 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_numeric(char c)
{
	return ((c > 47 && c < 58));
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_numeric(str[i]) != 1)
			return (0);
		i++;
	}
	return (1);
}
//
//int	main(int ac, char **av)
//{
//	int	i = 1;
//
//	if (ac < 2)
//		return (1);
//	while (i < ac)
//	{
//		printf("%s %d\n", av[i], ft_str_is_numeric(av[i]));
//		i++;
//	}
//}
