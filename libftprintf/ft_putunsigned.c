/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:18:16 by jbyrne            #+#    #+#             */
/*   Updated: 2024/02/08 16:23:23 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	numdigits(unsigned int num)
{
	if (num == 0)
		return (0);
	return (1 + numdigits(num / 10));
}

void	printdigitsrec(unsigned int num, int digitcount)
{
	int	length;

	length = 0;
	if (digitcount == 0)
		return ;
	printdigitsrec(num / 10, digitcount - 1);
	ft_putchar_fd(num % 10 + '0', 1);
	length++;
}

int	ft_putunsigned(unsigned int num)
{
	int	digits;

	if (num == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	digits = numdigits(num);
	printdigitsrec(num, digits);
	return (digits);
}
