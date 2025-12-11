/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:05:43 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/11/20 18:00:02 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ps;
	unsigned char	*pd;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	ps = (unsigned char *)src;
	pd = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		*(pd + i) = *(ps + i);
		i++;
	}
	return (dest);
}
