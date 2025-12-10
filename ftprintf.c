/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 09:24:23 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/12/10 23:42:14 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int	ftprintf(const char *mandarg, ...)
{
	va_list	extraargs;
	int		mandargchars;
	int		extraargschars;

	mandargchars = 0;
	extraargschars = 0;
	va_start(extraargs, mandarg);
	while (*mandarg)
	{
		if (*mandarg == '%')
		{
			mandarg++;
			// call the helper function that handles each format specifier
		}
		else
		{
			write(1, &(*mandarg), 1);
			mandargchars++;
		}
		mandarg++;
	}
	va_end(extraargs);
	return (mandargchars + extraargschars);
}
