/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:30:20 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/11/08 15:42:22 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			nbytes;
	void			*ptr;
	unsigned char	*zeroptr;
	size_t			i;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	nbytes = nmemb * size;
	ptr = malloc(nbytes);
	if (ptr != NULL)
	{
		i = 0;
		zeroptr = (unsigned char *)ptr;
		while (i < nbytes)
		{
			zeroptr[i] = 0;
			i++;
		}
		return (ptr);
	}
	return (NULL);
}
