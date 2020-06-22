/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 00:14:03 by eutrodri      #+#    #+#                 */
/*   Updated: 2019/01/13 04:13:39 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char a;

	a = 48;
	while (a <= 57)
	{
		ft_putchar(a);
		a++;
	}
}
