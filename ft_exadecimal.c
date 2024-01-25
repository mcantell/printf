/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exadecimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <mcantell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:29:52 by mcantell          #+#    #+#             */
/*   Updated: 2024/01/25 19:34:38 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnubexa(unsigned int i)
{
	int	l;

	l = 0;
	while (i != 0)
	{
		i = i / 16;
		l++;
	}
	return (l);
}

void 