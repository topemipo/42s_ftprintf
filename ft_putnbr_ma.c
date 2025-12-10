/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ma.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:57:32 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/12/10 22:18:47 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

static int ft_putnbr_hex(unsigned long n, int fd)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (n > 15)
		count = count + ft_putnbr_hex(n / 16, fd);
	ft_putchar_fd(base[n % 16], fd);
	count++;
	return (count);
}
 
int ft_putnbr_ma(unsigned long n, int fd)
{
	int	totallength;

	write(fd, "0x", 2);
	totallength = 2;

	totallength += ft_putnbr_hex(n, fd);
	return (totallength);
}

/*
int main(void)
{
	int num = 4;

	// 0x7ffd026a6d0c and 7ffd026a6d0c and 140724643982604
	// printf("%p and %lx and %lu\n", &num, (unsigned long)&num, (unsigned long)&num);
	ft_putnbr_ma(140724643982604, 1);
}
*/