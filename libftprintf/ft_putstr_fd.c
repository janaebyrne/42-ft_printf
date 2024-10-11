/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:16:14 by jbyrne            #+#    #+#             */
/*   Updated: 2024/02/08 16:05:39 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(const char *s, int fd)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	return (i);
}
