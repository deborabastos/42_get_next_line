/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-p <dalves-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 20:54:29 by dalves-p          #+#    #+#             */
/*   Updated: 2021/06/25 22:27:14 by dalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;

	// fd = open("song.txt", O_RDONLY);
	// get_next_line(fd, &line);
	// printf("%s\n", line);
	

	// get_next_line(fd, &line);
	// printf("%s\n", line);

	fd = open("song.txt", O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);
		free(line);
	}			
	free(line);
	close(fd);
	return (0);
}
