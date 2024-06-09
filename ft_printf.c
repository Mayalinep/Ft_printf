/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpelage <mpelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 13:29:02 by mpelage           #+#    #+#             */
/*   Updated: 2024/06/09 16:53:08 by mpelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type(const char c, va_list format, int *count)
{
	if (c == 'c')
	{
		++(*count);
		ft_putchar(va_arg(format, int));
	}
	else if (c == 's')
		ft_putstr(va_arg(format, char *), count);
	else if (c == 'p')
		ft_printptr(va_arg(format, unsigned long long), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(format, int), count);
	else if (c == 'u')
		ft_printu(va_arg(format, unsigned int), count);
	else if (c == 'x' || c == 'X')
		ft_printhex(va_arg(format, unsigned int), c, count);
	else if (c != 0)
	{
		++(*count);
		ft_putchar(c);
	}
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str != '%')
		{
			ft_putchar(*str);
			count++;
		}
		else
			ft_type(*++str, args, &count);
		++str;
	}
	va_end(args);
	return (count);
}
