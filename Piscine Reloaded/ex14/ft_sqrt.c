/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 22:27:46 by eutrodri      #+#    #+#                 */
/*   Updated: 2019/01/10 00:18:11 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int a;

	a = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (nb > a * a)
		a++;
	if (nb == a * a)
		return (a);
	else
		return (0);
}
