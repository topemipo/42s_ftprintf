/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 09:27:08 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/12/08 20:29:09 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
# include <unistd.h>
#include "libft/libft.h"

int	ftprintf(const char *, ...);
int	ft_putnbrui_fd(unsigned int ln, int fd);
int ft_putnbr_hex(unsigned long n, int fd);