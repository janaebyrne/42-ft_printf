/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:20:00 by jbyrne            #+#    #+#             */
/*   Updated: 2024/02/08 16:15:32 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printformat(char format, va_list args)
{
	int	length;

	length = 0;
	if (format == 'c')
		length = ft_putchar_fd(va_arg(args, int), 1);
	else if (format == 'd' || format == 'i')
		length = ft_putnbr_fd(va_arg(args, int), 1);
	else if (format == 's')
		length = ft_putstr_fd(va_arg(args, char *), 1);
	else if (format == 'p')
		length = ft_printptr(va_arg(args, void *));
	else if (format == 'u')
		length += ft_putunsigned(va_arg(args, int));
	else if (format == 'x')
		length += ft_putnbr_hex(va_arg(args, unsigned int), "0123456789abcdef",
				16);
	else if (format == 'X')
		length += ft_putnbr_hex(va_arg(args, unsigned int), "0123456789ABCDEF",
				16);
	else if (format == '%')
		length += ft_putchar_fd('%', 1);
	return (length);
}
