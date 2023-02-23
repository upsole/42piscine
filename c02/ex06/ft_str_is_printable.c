/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoler-u <psoler-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 11:49:30 by psoler-u          #+#    #+#             */
/*   Updated: 2023/02/11 17:34:33 by psoler-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_nonprintable(unsigned char c)
{
	return (c < 32 || c >= 127);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_nonprintable(str[i]))
			return (0);
		i++;
	}
	return (1);
}
//
//int	main(void)
//{
//	printf("%s %d\n", "as\0df",ft_str_is_printable("\0asdf"));
//	printf("%s %d\n", "as\ndf",ft_str_is_printable("\nasdf"));
//	printf("%s %d\n", "as\td",ft_str_is_printable("\tasdf"));
//	printf("%s %d\n", "asdf",ft_str_is_printable("asdf"));
//	printf("%s %d\n", "asd", ft_str_is_printable(""));
//}
