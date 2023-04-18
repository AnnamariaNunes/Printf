/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:33:02 by aangelic          #+#    #+#             */
/*   Updated: 2023/04/17 15:59:55 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *size)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", size);
	}
	else if (n < 0)
	{
		ft_putchar('-', size);
		ft_putnbr(-n, size);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, size);
		ft_putnbr(n % 10, size);
	}
	else
		ft_putchar(n + 48, size);
}
