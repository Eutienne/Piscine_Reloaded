/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 03:47:19 by eutrodri      #+#    #+#                 */
/*   Updated: 2019/01/14 23:26:03 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int b;
	int a;

	b = 1;
	if (nb == 1 || nb == 0)
		return (b);
	if (nb < 0 || nb > 12)
		return (0);
	a = nb;
	while (nb != 1)
	{
		nb--;
		a = nb * a;
	}
	return (a);
}
