/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsgint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:28:21 by aangelic          #+#    #+#             */
/*   Updated: 2023/04/17 16:28:23 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsgint(unsigned int n, int *size)
{
	if (n >= 10)
	{
		ft_unsgint(n / 10, size);
		ft_unsgint(n % 10, size);
	}
	else
		ft_putchar((n + 48), size);
}
