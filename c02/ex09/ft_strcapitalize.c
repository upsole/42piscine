/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:21:05 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/08 11:40:35 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanum(char c)
{
	return ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123));
}

void	char_upcase(char *c)
{
	if (*c > 96 && *c < 123)
		*c = *c - 32;
}

void	char_lowcase(char *c)
{
	if (*c > 64 && *c < 91)
		*c = *c + 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (is_alphanum(str[i]))
		{
			if (!word)
				char_upcase(&str[i]);
			else
				char_lowcase(&str[i]);
			word = 1;
		}
		else
			word = 0;
		i++;
	}
	return (str);
}
//int	main(int ac, char **av)
//{
//	if (ac < 2)
//		return (1);
//	int	i = 0;
//	while (++i < ac)
//	{
//		printf("%s \n", av[i]);
//		printf("%s\n", ft_strcapitalize(av[i]));
//		printf("\n");
//	}
//}
