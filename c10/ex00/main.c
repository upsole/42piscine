/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*   filename.vim                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upsol   <email@email.com>		             +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 19:39:01 by upsol             #+#    #+#             */
/*   Updated: 2018/05/09 17:07:46 by upsol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	ft_error(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(2, &s[i], 1);
		i++;
	}
}

int	ft_display_file(char *filename)
{
	int		f;
	char	*buf[5000];

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	read(f, buf, 5000);
	write(1, buf, 5000);
	close(f);
	return (1);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_error("File name missing.\n");
		return (1);
	}
	if (ac > 2)
	{
		ft_error("Too many arguments.\n");
		return (1);
	}
	if (!ft_display_file(av[1]))
	{
		ft_error("Cannot read file.\n");
	}
	return (0);
}
