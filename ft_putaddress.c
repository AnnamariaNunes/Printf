/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:32:57 by aangelic          #+#    #+#             */
/*   Updated: 2023/04/17 16:49:21 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddress(unsigned long int n, int *size)
{
	if (!n)
		ft_putstr("(nil)", size);
	else
	{
		if (n < 16)
		{
			ft_putstr("0x", size);
			ft_putchar(HEX_LOWER[n % 16], size);
			return ;
		}
		ft_putaddress(n / 16, size);
		ft_putchar(HEX_LOWER[n % 16], size);
	}
}
