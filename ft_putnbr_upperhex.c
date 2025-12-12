/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_upperhex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:57:32 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/12/12 16:47:42 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_upperhex(unsigned int n, int fd)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789ABCDEF";
	if (n > 15)
		count = count + ft_putnbr_upperhex(n / 16, fd);
	ft_putchar_fd(base[n % 16], fd);
	count++;
	return (count);
}
