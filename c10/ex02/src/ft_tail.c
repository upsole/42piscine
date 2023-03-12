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
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <libgen.h>
#include <string.h>
#include "utils.h"

void	handle_error(int err, char *filename, char *bin)
{
	ft_putstr(bin);
	ft_putstr(": cannot open '");
	ft_putstr(filename);
	ft_putstr("' for reading: ");
	ft_putstr(strerror(err));
	ft_putstr("\n");
}

int	buffer_length(char *filename, char *bin)
{
	int		fd;
	int		len;
	char	*buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		handle_error(ENOENT, filename, bin);
		return (0);
	}
	len = 0;
	while (read(fd, &buf, 1))
	{
		if (len > 30720)
		{
			handle_error(EFBIG, filename, bin);
			return (0);
		}
		len++;
	}
	close(fd);
	return (len);
}

void	print_lines(char *filename, int x, char *bin)
{
	int		fd;
	int		len;
	int		i;
	char	buf[30720];

	len = buffer_length(filename, bin);
	if (!len)
		return ;
	fd = open(filename, O_RDONLY);
	read(fd, buf, len);
	i = len - x;
	if (i < 0)
		i = 0;
	while (i < len)
	{
		write(1, &buf[i], 1);
		i++;
	}
	close(fd);
}

int	check_flags(int ac, char **av)
{
	if (ac < 4)
		return (0);
	if (av[1][0] != '-' && av[1][1] != 'c')
		return (0);
	return (1);
}

int	main(int ac, char **av)
{
	int	i;

	if (!check_flags(ac, av))
		return (1);
	i = 3;
	while (i < ac)
	{
		if (ac > 4)
		{
			ft_putstr("==> ");
			ft_putstr(basename(av[i]));
			ft_putstr(" <==\n");
		}
		print_lines(av[i], ft_atoi_positive(av[2]), av[0]);
		i++;
		if (i < ac)
			ft_putstr("\n");
	}
	return (0);
}
