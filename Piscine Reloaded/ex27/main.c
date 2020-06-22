/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 21:12:15 by eutrodri      #+#    #+#                 */
/*   Updated: 2019/01/14 23:55:42 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	c;

	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	fd = open((argv[1]), O_RDONLY);
	while (read(fd, &c, 1) != 0)
		write(1, &c, 1);
	close(fd);
	return (0);
}
