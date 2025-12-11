/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 20:55:28 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/11/20 16:38:22 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	src_len = 0;
	while (src[src_len])
		src_len++;
	dst_len = 0;
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	if (dst_len >= size)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && i < (size - dst_len - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
