/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: temit <temit@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 09:27:08 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/12/11 14:58:57 by temit            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"

int	ftprintf(const char *mandarg, ...);
int	ft_putnbrui_fd(unsigned int ln, int fd);
int	ft_putnbr_ma(unsigned long n, int fd);
int	ft_putnbr_upperhex(unsigned int n, int fd);
int	ft_putnbr_lowerhex(unsigned int n, int fd);
int	ft_putcharint_fd(char c, int fd);
int	ft_putstrint_fd(char *s, int fd);
int	ft_putnbrint_fd(int n, int fd);