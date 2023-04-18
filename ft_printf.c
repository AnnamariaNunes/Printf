/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:32:52 by aangelic          #+#    #+#             */
/*   Updated: 2023/04/17 17:16:47 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_placeholders(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd'
		|| c == 'i' || c == 'u' || c == 'x'
		|| c == 'X' || c == '%')
		return (1);
	return (0);
}

void	ft_get_printed(va_list args, char c, int *size)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), size);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), size);
	else if (c == 'p')
		ft_putaddress(va_arg(args, unsigned long), size);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), size);
	else if (c == 'u')
		ft_unsgint(va_arg(args, unsigned int), size);
	else if (c == 'x')
		ft_check(va_arg(args, int), 2, size);
	else if (c == 'X')
		ft_check(va_arg(args, int), 1, size);
	else if (c == '%')
		ft_putchar('%', size);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		size;

	i = 0;
	size = 0;
	va_start(args, str);
	while (str[i])
	{	
		if (str[i] == '%' && ft_placeholders(str[i + 1]))
			ft_get_printed(args, str[++i], &size);
		else
			ft_putchar(str[i], &size);
		i++;
	}
	va_end(args);
	return (size);
}
