/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 19:36:57 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/11/19 17:18:16 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*ps;
	unsigned char		*pd;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (NULL);
	ps = (const unsigned char *)src;
	pd = (unsigned char *)dest;
	if (pd < ps)
	{
		i = 0;
		while (i < n)
		{
			*(pd + i) = *(ps + i);
			i++;
		}
	}
	else
	{
		while (n--)
			pd[n] = ps[n];
	}
	return (dest);
}
