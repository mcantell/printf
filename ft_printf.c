/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <mcantell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:12:38 by mcantell          #+#    #+#             */
/*   Updated: 2024/01/30 10:06:52 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_proto(va_list args, const char frmt)
{
	int	l;

	l = 0;
	if (frmt == '%')
		l += ft_putchar('%');
	if (frmt == 'c')
		l += ft_putchar(va_arg(args, int));
	if (frmt == 's')
		l += ft_putstr(va_arg(args, char *));
	if (frmt == 'd' || frmt == 'i')
		l += ft_printnub(va_arg(args, long long int));
	if (frmt == 'u')
		l += ft_printunsnub(va_arg(args, unsigned int));
	if (frmt == 'x' || frmt == 'X')
		l += ft_putnubhex(va_arg(args, unsigned int), frmt);
	if (frmt == 'p')
		l += ft_pointer(va_arg(args, unsigned long int));
	return (l);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_proto(args, str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
