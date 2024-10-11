/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:31:33 by jbyrne            #+#    #+#             */
/*   Updated: 2024/02/08 15:54:23 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdio.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>

int	ft_putchar_fd(char c, int fd);
int	ft_putstr_fd(const char *s, int fd);
int	ft_putnbr_fd(int n, int fd);
int	ft_printformat(char format, va_list args);
int	ft_strlen(const char *str);
int	ft_printf(const char *str, ...);
int	ft_putnbr_hex(unsigned long n, char *symbols, unsigned int base);
int	ft_printptr(void *ptr);
int	ft_putunsigned(unsigned int num);
int	ft_putptr(unsigned long long num);

#endif
