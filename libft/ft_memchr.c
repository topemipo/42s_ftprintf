/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 22:17:44 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/11/04 23:08:44 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ps;
	size_t			i;

	ps = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(ps + i) == (unsigned char)c)
			return (ps + i);
		i++;
	}
	return (NULL);
}
