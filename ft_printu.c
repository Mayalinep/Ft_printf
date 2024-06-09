/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpelage <mpelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 16:17:51 by mpelage           #+#    #+#             */
/*   Updated: 2024/06/09 16:55:37 by mpelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

void	ft_printu(unsigned int nbr, int *count)
{
	if (nbr >= 10)
	{
		ft_printu(nbr / 10, count);
	}
	ft_putchar((nbr % 10) + '0');
	(*count)++;
}
