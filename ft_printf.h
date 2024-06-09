/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpelage <mpelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 13:29:10 by mpelage           #+#    #+#             */
/*   Updated: 2024/06/09 16:33:49 by mpelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_printhex(unsigned int nbr, char format, int *count);
void	ft_printptr(unsigned long long ptr, int *count);
void	ft_printu(unsigned int nbr, int *count);
void	ft_putchar(char c);
void	ft_putstr(char *s, int *count);
void	ft_putnbr(int nbr, int *count);

#endif