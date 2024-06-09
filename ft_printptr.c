/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpelage <mpelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 16:09:16 by mpelage           #+#    #+#             */
/*   Updated: 2024/06/09 16:55:46 by mpelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

void	ft_printptr(unsigned long long ptr, int *count)
{
	int		i;
	char	*hex;
	char	buffer[16];

	hex = "0123456789abcdef";
	if (!ptr)
	{
		ft_putstr("(nil)", count);
		return ;
	}
	ft_putstr("0x", count);
	i = 0;
	while (ptr)
	{
		buffer[i++] = hex[ptr % 16];
		ptr = ptr / 16;
	}
	while (i--)
	{
		ft_putchar(buffer[i]);
		(*count)++;
	}
}
