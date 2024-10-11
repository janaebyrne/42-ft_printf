/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:50:18 by jbyrne            #+#    #+#             */
/*   Updated: 2024/02/08 16:26:38 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(void *ptr)
{
	int	length;

	length = 0;
	length += ft_putptr((unsigned long long)ptr);
	return (length);
}
