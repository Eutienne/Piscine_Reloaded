/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_params.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 03:57:00 by eutrodri      #+#    #+#                 */
/*   Updated: 2019/01/13 05:21:10 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_params(char *str)
{
	int a;

	a = 0;
	while (str[a])
	{
		ft_putchar(str[a]);
		a++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc <= 1)
		return (0);
	while (argv[i])
	{
		ft_print_params(argv[i]);
		i++;
	}
	return (0);
}
