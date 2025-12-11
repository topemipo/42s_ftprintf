/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:30:24 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/11/19 16:25:49 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	slen;
	char	*ptr;
	size_t	i;

	slen = 0;
	while (s1[slen])
		slen++;
	ptr = (char *)malloc((slen + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < slen)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[slen] = '\0';
	return (ptr);
}
