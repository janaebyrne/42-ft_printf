/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:53:52 by jbyrne            #+#    #+#             */
/*   Updated: 2024/02/08 16:17:55 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long num)
{
	int					length;
	unsigned long long	address;

	address = (unsigned long long)num;
	length = 0;
	if (num == 0)
	{
		length += ft_putstr_fd("(nil)", 1);
		return (length);
	}
	else
	{
		length += ft_putstr_fd("0x", 1);
		length += ft_putnbr_hex(address, "0123456789abcdef", 16);
	}
	return (length);
}
