/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:00:07 by mcantell          #+#    #+#             */
/*   Updated: 2024/01/29 13:05:05 by mcantell         ###   ########.fr       */
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
int	ft_putnu(long int i);
int	ft_printunsnub(unsigned int i);
int	ft_putnub(unsigned int i);
int	ft_printnub(int i);
int	ft_putnubhex(unsigned int i, const char s);
int	ft_pointer(size_t p);
#endif