/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrui_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:01:06 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/12/12 16:47:22 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrui_fd(unsigned int ln, int fd)
{
	int	count;

	count = 0;
	if (ln > 9)
		count = count + ft_putnbrui_fd(ln / 10, fd);
	ft_putchar_fd(ln % 10 + '0', fd);
	count++;
	return (count);
}
