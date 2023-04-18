/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:33:07 by aangelic          #+#    #+#             */
/*   Updated: 2023/04/17 17:12:42 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *size)
{
	if (!s)
	{
		ft_putstr("(null)", size);
		return ;
	}
	while (*s)
		ft_putchar(*s++, size);
}
