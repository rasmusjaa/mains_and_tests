/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaakonm <rjaakonm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:22:38 by rjaakonm          #+#    #+#             */
/*   Updated: 2019/10/29 12:41:47 by rjaakonm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/includes/libft.h"
#include <fcntl.h>
#include <stdio.h>



int main(int ac, char **av)
{
	int			fd;
	int			fd1;
	int			fd2;
	char		*line;


	if (ac == 1)
	{
//		printf("Give one string as argument\n");
		get_next_line(0, &line);
		return (0);
	}
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd < 0)
			return (0);
		while (get_next_line(fd, &line) > 0)
		{
			ft_putendl(line);
			free(line);
		}
		close(fd);
	}
	if (ac == 3)
	{
/*		fd = open(av[1], O_RDONLY);
		if (fd < 0)
			return (0);
		while (get_next_line(fd, &line) > 0)
		{
			ft_putendl(line);
			free(line);
		}
		fd = open(av[2], O_RDONLY);
		if (fd < 0)
			return (0);
		while (get_next_line(fd, &line) > 0)
		{
			ft_putendl(line);
			free(line);
		}*/
		fd1 = open(av[1], O_RDONLY);
		fd2 = open(av[2], O_RDONLY);
		get_next_line(fd1, &line);
		printf("returned line from file 1: %s\n", line);
		get_next_line(fd2, &line);
		printf("returned line from file 2: %s\n", line);
		get_next_line(fd1, &line);
		printf("returned line from file 1: %s\n", line);
		get_next_line(fd2, &line);
		printf("returned line from file 2: %s\n", line);
		close(fd);
	}
	if (ac > 3)
	{
		printf("Give max two strings as argument\n");
		return (0);
	}
	return (0);
}
