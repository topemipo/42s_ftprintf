/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 09:24:23 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/12/16 13:31:13 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	formatspecifier(char fs, va_list *extraargs);

int	ft_printf(const char *mandarg, ...)
{
	va_list	extraargs;
	int		totalchars;

	totalchars = 0;
	va_start(extraargs, mandarg);
	while (*mandarg)
	{
		if (*mandarg == '%')
		{
			mandarg++;
			totalchars += formatspecifier(*mandarg, &extraargs);
		}
		else
		{
			write(1, &(*mandarg), 1);
			totalchars++;
		}
		mandarg++;
	}
	va_end(extraargs);
	return (totalchars);
}

static int	formatspecifier(char fs, va_list *extraargs)
{
	int		charcounts;

	charcounts = 0;
	if (fs == 'c')
		charcounts += ft_putcharint_fd(va_arg(*extraargs, int), 1);
	else if (fs == 's')
		charcounts += ft_putstrint_fd(va_arg(*extraargs, char *), 1);
	else if (fs == 'p')
		charcounts += ft_putnbr_ma(va_arg(*extraargs, unsigned long), 1);
	else if (fs == 'd' || fs == 'i')
		charcounts += ft_putnbrint_fd(va_arg(*extraargs, int), 1);
	else if (fs == 'u')
		charcounts += ft_putnbrui_fd(va_arg(*extraargs, unsigned int), 1);
	else if (fs == 'X')
		charcounts += ft_putnbr_upperhex(va_arg(*extraargs, unsigned int), 1);
	else if (fs == 'x')
		charcounts += ft_putnbr_lowerhex(va_arg(*extraargs, unsigned int), 1);
	else if (fs == '%')
	{
		write (1, "%", 1);
		charcounts++;
	}
	return (charcounts);
}
