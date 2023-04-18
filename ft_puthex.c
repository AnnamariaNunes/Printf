/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:32:48 by aangelic          #+#    #+#             */
/*   Updated: 2023/04/17 17:10:23 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, char *base, int *size)
{
	if (n / 16 == 0)
	{
		ft_putchar(base[n], size);
		return ;
	}
	else
	{
		ft_puthex(n / 16, base, size);
		ft_putchar(base[n % 16], size);
	}
}

void	ft_check(unsigned int n, int i, int *size)
{
	if (i == 1)
		ft_puthex(n, HEX_UPPER, size);
	if (i == 2)
		ft_puthex(n, HEX_LOWER, size);
}
