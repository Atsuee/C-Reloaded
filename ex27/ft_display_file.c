/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wailas <wailas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:18:33 by wailas            #+#    #+#             */
/*   Updated: 2024/11/09 11:16:19 by wailas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void	print_error(int ac)
{
	if (ac < 2)
		write(2, "File name missing.\n", 19);
	else
		write(2, "Too many arguments.\n", 20);
}

int	main(int ac, char **av)
{
	int		fd;
	int		read_count;
	char	buffer;

	if (ac != 2)
	{
		print_error(ac);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	read_count = read(fd, &buffer, 1);
	while (read_count > 0)
	{
		write(1, &buffer, 1);
		read_count = read(fd, &buffer, 1);
	}
	close(fd);
	return (0);
}
