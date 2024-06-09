/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpelage <mpelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 16:21:24 by mpelage           #+#    #+#             */
/*   Updated: 2024/06/09 16:55:53 by mpelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

void	ft_printhex(unsigned int nbr, char format, int *count)
{
	char	*hex;

	if (format == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		ft_printhex(nbr / 16, format, count);
	}
	ft_putchar(hex[nbr % 16]);
	(*count)++;
}
