/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrint_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:00:56 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/12/16 19:41:38 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrint_fd(int n, int fd)
{
	int		count;
	char	c;

	count = 0;
	if (n == -2147483648)
		return (write(fd, "-2147483648", 11));
	if (n == 0)
		return (write(fd, "0", 1));
	if (n >= -2147483647 && n <= -1)
	{
		write(fd, "-", 1);
		n = -n;
		count++;
	}
	if (n > 9)
		count += ft_putnbrint_fd(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
	count++;
	return (count);
}
