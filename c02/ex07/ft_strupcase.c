/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:04:06 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/08 11:26:30 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_lower(char c)
{
	return (c >= 97 && c <= 122);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_lower(str[i]))
			str[i] = str[i] - 32;
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
//		printf("%s\n", ft_strupcase(av[i]));
//		i++;
//	}
//}
