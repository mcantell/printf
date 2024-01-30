/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <mcantell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:59:52 by mcantell          #+#    #+#             */
/*   Updated: 2024/01/30 10:08:41 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnu(long long int i)
{
	long long int	n;
	int				l;

	n = i;
	l = 0;
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
		l++;
	}
	if (n >= 10)
		l += ft_putnu(n / 10);
	l += ft_putchar((n % 10) + '0');
	return (l);
}

int	ft_printnub(long long int i)
{
	long long int	n;

	n = 0;
	if (i == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	n += ft_putnu(i);
	return (n);
}

int	ft_printunsnub(unsigned int i)
{
	int	f;

	f = 0;
	if (i == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	f += ft_putnu(i);
	return (f);
}
