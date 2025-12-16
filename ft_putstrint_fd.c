/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrint_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:59:51 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/12/16 17:15:12 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstrint_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
	{
		write (fd, "(null)", 6);
		return (6);
	}
	i = 0;
	while (s[i])
	{
		write(fd, s + i, 1);
		i++;
	}
	return (i);
}
