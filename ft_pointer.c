/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <mcantell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:43:04 by mcantell          #+#    #+#             */
/*   Updated: 2024/01/29 15:54:41 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnum(unsigned long int i)
{
	int	l;

	l = 0;
	if (i == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	while (i != 0)
	{
		i = i / 16;
		l++;
	}
	return (l);
}

int	ft_puthex(unsigned long int i)
{
	long int	c;

	if (i >= 16)
		ft_puthex(i / 16);
	c = i % 16;
	if (c > 9)
		ft_putchar(c - 10 + 'a');
	else if (c <= 9 && c >= 0)
		ft_putchar(c + '0');
	return (ft_putnum(i));
}

int	ft_pointer(unsigned long int p)
{
	int	len;

	len = 0;
	if (p == 0)
	{
		len += ft_putstr("0x0");
		return (len);
	}
	len += ft_putstr("0x");
	len += ft_putnum(p);
	ft_puthex(p);
	return (len);
}
