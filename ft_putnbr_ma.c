/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ma.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:57:32 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/12/16 12:28:11 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_hex(unsigned long n, int fd)
{
	char	*base;
	int		count;
	char	c;

	count = 0;
	base = "0123456789abcdef";
	if (n > 15)
		count += ft_putnbr_hex(n / 16, fd);
	c = base[n % 16];
	write(fd, &c, 1);
	count++;
	return (count);
}

int	ft_putnbr_ma(unsigned long n, int fd)
{
	int	totallength;

	write(fd, "0x", 2);
	totallength = 2;
	totallength += ft_putnbr_hex(n, fd);
	return (totallength);
}
