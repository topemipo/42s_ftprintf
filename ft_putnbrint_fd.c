/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrint_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:00:56 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/12/12 17:32:28 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrint_fd(int n, int fd)
{
	long	ln;
	int		count;
	char	c;

	ln = (long)n;
	count = 0;
	if (ln < 0)
	{
		write(fd, "-", 1);
		ln = -ln;
	}
	if (ln > 9)
		count += ft_putnbrint_fd(ln / 10, fd);
	c = ln % 10 + '0';
	write(fd, &c, 1);
	count++;
	return (count);
}
