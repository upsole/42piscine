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
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <libgen.h>
#include <fcntl.h>

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

int	f(char *str)
{
	int		fd;
	char	s[30720];
	int		len;

	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (ENOENT);
	len = 0;
	while (read(fd, &s, 1))
	{
		if (len > 30720)
			return (EIO);
		len++;
	}
	close(fd);
	fd = open(str, O_RDONLY);
	read(fd, s, len);
	write(1, s, len);
	close(fd);
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	is_err;

	if (ac < 2)
		return (1);
	i = 1;
	while (i < ac)
	{
		is_err = f(av[i]);
		if (is_err)
		{
			ft_putstr("cat: ");
			ft_putstr(av[i]);
			ft_putstr(": ");
			ft_putstr(strerror(is_err));
			ft_putstr("\n");
			return (1);
		}
		i++;
	}
	return (0);
}
