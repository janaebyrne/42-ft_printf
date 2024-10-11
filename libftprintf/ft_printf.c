/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:20:37 by jbyrne            #+#    #+#             */
/*   Updated: 2024/02/08 16:04:08 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	argptr;
	int		i;
	int		length;

	va_start(argptr, str);
	i = 0;
	length = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			length += ft_putchar_fd(str[i++], 1);
		else if (str[++i] == 'n')
			length += ft_putchar_fd('\n', 1);
		else
			length += ft_printformat(str[i++], argptr);
	}
	va_end(argptr);
	return (length);
}
