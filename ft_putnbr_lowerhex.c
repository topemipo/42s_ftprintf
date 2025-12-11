/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_lowerhex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: temit <temit@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:57:32 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/12/11 14:56:07 by temit            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_lowerhex(unsigned int n, int fd)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (n > 15)
		count = count + ft_putnbr_lowerhex(n / 16, fd);
	ft_putchar_fd(ft_tolower(base[n % 16]), fd);
	count++;
	return (count);
}

/*
int main(void)
{
	printf("%x\n", (unsigned int)429496);
	ft_putnbr_lowerhex((unsigned int)429496, 1);
}
*/