/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <mcantell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:00:07 by mcantell          #+#    #+#             */
/*   Updated: 2024/01/30 10:13:44 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdbool.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnu(long long int i);
int	ft_printunsnub(unsigned int i);
int	ft_putnub(unsigned int i);
int	ft_printnub(long long int i);
int	ft_putnubhex(unsigned int i, const char s);
int	ft_pointer(unsigned long int p);
int	ft_proto(va_list args, const char frmt);
int	ft_printf(const char *str, ...);
#endif