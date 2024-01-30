/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exadecimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <mcantell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:29:52 by mcantell          #+#    #+#             */
/*   Updated: 2024/01/29 15:35:11 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnub(unsigned int i)
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

int	ft_putnubhex(unsigned int i, const char s)
{
	unsigned int	c;

	if (i == 0)
		return (write (1, "0", 1));
	if (i >= 16)
		ft_putnubhex(i / 16, s);
	c = i % 16;
	if (c > 9 && s == 'x')
		ft_putchar(c - 10 + 'a');
	if (c > 9 && s == 'X')
		ft_putchar(c - 10 + 'A');
	else if (c <= 9 && c >= 0)
		ft_putchar(c + '0');
	return (ft_putnub(i));
}
