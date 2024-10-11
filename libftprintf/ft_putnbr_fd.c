/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:16:02 by jbyrne            #+#    #+#             */
/*   Updated: 2024/02/08 16:15:59 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	length;

	length = 0;
	if (n == -2147483648)
	{
		write(fd, "-", 1);
		write(fd, "2", 1);
		n = 147483648;
		length += 2;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		length += 1;
	}
	if (n >= 10)
	{
		length += ft_putnbr_fd(n / 10, fd);
		length += ft_putchar_fd((n % 10) + '0', fd);
	}
	else
		length += ft_putchar_fd(n + '0', fd);
	return (length);
}
