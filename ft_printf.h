/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 09:27:08 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/12/16 12:27:48 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_printf(const char *mandarg, ...);
int	ft_putnbrui_fd(unsigned int ln, int fd);
int	ft_putnbr_ma(unsigned long n, int fd);
int	ft_putnbr_upperhex(unsigned int n, int fd);
int	ft_putnbr_lowerhex(unsigned int n, int fd);
int	ft_putcharint_fd(char c, int fd);
int	ft_putstrint_fd(char *s, int fd);
int	ft_putnbrint_fd(int n, int fd);

#endif