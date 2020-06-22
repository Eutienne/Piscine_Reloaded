/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 16:57:59 by eutrodri      #+#    #+#                 */
/*   Updated: 2019/01/13 04:37:13 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int a;
	int b;
	char*str;

	a = 0;
	b = 0;
	while (src[a])
		a++;
	str = (char*)malloc(sizeof(*str) * (a + 1));
	while (a != -1)
	{
		str[b] = src[b];
		b++;
		a--;
	}
	return (str);
}
