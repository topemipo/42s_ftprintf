/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrui_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:01:06 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/12/12 17:33:33 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrui_fd(unsigned int ln, int fd)
{
	int		count;
	char	c;

	count = 0;
	if (ln > 9)
		count = count + ft_putnbrui_fd(ln / 10, fd);
	c = ln % 10 + '0';
	write(fd, &c, 1);
	count++;
	return (count);
}
