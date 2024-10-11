/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:32:24 by jbyrne            #+#    #+#             */
/*   Updated: 2024/02/08 15:49:13 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	ft_putnbr_hex(unsigned long n, char *symbols, unsigned int base)
{
	int	length;

	length = 0;
	if (n >= base)
	{
		length = ft_putnbr_hex((n / base), symbols, base);
		length += ft_putchar_fd(symbols[(n % base)], 1);
	}
	else
	{
		length += ft_putchar_fd(symbols[n], 1);
	}
	return (length);
}
// #include <limits.h>
// int	main(void)
// {
// 	ft_putnbr_hex(LONG_MIN, "0123456789abcdef", 16);
// 	return (0);
// }
