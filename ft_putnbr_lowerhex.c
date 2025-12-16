/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_lowerhex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:57:32 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/12/12 17:33:07 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_lowerhex(unsigned int n, int fd)
{
	char	*base;
	int		count;
	char	c;

	count = 0;
	base = "0123456789abcdef";
	if (n > 15)
		count += ft_putnbr_lowerhex(n / 16, fd);
	c = base[n % 16];
	write(fd, &c, 1);
	count++;
	return (count);
}
