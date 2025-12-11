/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:16:41 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/11/05 20:05:32 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if ((const unsigned char)s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return ((char *)(s + i));
	return (NULL);
}
