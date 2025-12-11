/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: temit <temit@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:16:37 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/10/28 18:41:38 by temit            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	len;
	char	*result;

	i = 0;
	len = 0;
	result = NULL;
	while (s[len])
		len++;
	while (i <= len)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			result = (char *)(s + i);
		i++;
	}
	return (result);
}
