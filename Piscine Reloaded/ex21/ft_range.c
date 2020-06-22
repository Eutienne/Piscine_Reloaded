/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 19:50:46 by eutrodri      #+#    #+#                 */
/*   Updated: 2019/01/12 20:45:56 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *str;
	int j;

	i = min;
	j = 0;
	if (min >= max)
		return (0);
	while (i != max)
		i++;
	str = (int*)malloc(sizeof(*str) * (i + 1));
	while (min != max)
	{
		str[j] = min;
		min++;
		j++;
	}
	return (str);
}
