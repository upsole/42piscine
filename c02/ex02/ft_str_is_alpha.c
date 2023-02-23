/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:51:23 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/08 21:15:30 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_alpha(char c)
{
	return ((c > 64 && c < 91) || (c > 96 && c < 123));
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_alpha(str[i]) != 1)
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
//		printf("%s %d\n", av[i], ft_str_is_alpha(av[i]));
//		i++;
//	}
//
//	return (0);
//}
