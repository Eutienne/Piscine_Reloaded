/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 07:12:14 by eutrodri      #+#    #+#                 */
/*   Updated: 2019/01/13 05:21:53 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_strcmp(char **s1, char **s2)
{
	int d;

	d = 0;
	while (*s1[d] == *s2[d])
		d++;
	if (*s1[d] > *s2[d])
		ft_swap(s1, s2);
}

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
	int j;

	i = 1;
	j = 1;
	while (argc > 2)
	{
		while (argv[j + 1])
		{
			ft_strcmp(&argv[j], &argv[j + 1]);
			j++;
		}
		argc--;
		j = 1;
	}
	while (argv[i])
	{
		ft_print_params(argv[i]);
		i++;
	}
	return (0);
}
