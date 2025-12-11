/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 01:10:31 by temit             #+#    #+#             */
/*   Updated: 2025/11/08 20:51:00 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	lenofdig(long num, int sign);
static char		*fillstring(char *ptr, size_t lod, long num, int sign);

char	*ft_itoa(int n)
{
	long	ln;
	int		isneg;
	char	*string;
	size_t	cod;

	ln = (long)n;
	isneg = 0;
	if (ln < 0)
	{
		isneg = 1;
		ln = -ln;
	}
	cod = lenofdig (ln, isneg);
	string = (char *)malloc(cod + 1);
	if (string == NULL)
		return (NULL);
	string[cod] = '\0';
	cod--;
	return (fillstring(string, cod, ln, isneg));
}

static size_t	lenofdig(long num, int sign)
{
	size_t	nod;

	nod = 0;
	if (num == 0)
		nod++;
	while (num != 0)
	{
		num = num / 10;
		nod++;
	}
	if (sign == 1)
		nod++;
	return (nod);
}

static char	*fillstring(char *ptr, size_t lod, long num, int sign)
{
	if (num == 0)
		ptr[lod] = '0';
	while (num > 0)
	{
		ptr[lod] = (num % 10) + '0';
		num = num / 10;
		lod--;
	}
	if (sign == 1)
		ptr[lod] = '-';
	return (ptr);
}
