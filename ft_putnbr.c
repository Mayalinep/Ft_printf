/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpelage <mpelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 16:01:31 by mpelage           #+#    #+#             */
/*   Updated: 2024/06/09 16:55:21 by mpelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

void	ft_putnbr(int nbr, int *count)
{
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648", count);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		(*count)++;
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10, count);
	}
	ft_putchar(nbr % 10 + '0');
	(*count)++;
}
