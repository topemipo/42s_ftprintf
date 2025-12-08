/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:57:32 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/12/08 21:14:44 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int ft_putnbr_hex(unsigned long n, int fd)
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

/*
int main(void)
{
	printf("%lx\n", 140721120898156);
	ft_putnbr_hex(140721120898156, 1);
}
*/