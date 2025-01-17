/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakande <vakande@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:13:22 by vakande           #+#    #+#             */
/*   Updated: 2025/01/15 20:13:34 by vakande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	display_error(const char *message, int len)
{
	write (2, message, len);
}

int	open_file(char *filename)
{
	return (open(filename, O_RDONLY));
}

void	read_and_display(int fd)
{
	char	buffer[BUFF_SIZE];
	size_t	bytes_read;

	while (1)
	{
		bytes_read = read(fd, buffer, BUFF_SIZE);
		if (bytes_read <= 0)
			break ;
		write(1, buffer, bytes_read);
	}
}

int	main(int ac, char *av[])
{
	int	fd;

	if (ac < 2)
		display_error("File name missing.\n", 19);
	else if (ac > 2)
		display_error("Too many arguments.\n", 20);
	else
	{
		fd = open_file(av[1]);
		if (fd == -1)
			display_error("Cannot read file.\n", 18);
		else
		{
			read_and_display(fd);
			close(fd);
		}
	}
	return (0);
}
