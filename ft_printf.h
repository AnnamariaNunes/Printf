/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:32:55 by aangelic          #+#    #+#             */
/*   Updated: 2023/04/17 17:03:20 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *size);
void	ft_putstr(char *str, int *size);
void	ft_putaddress(unsigned long int n, int *size);
void	ft_putnbr(int n, int *size);
void	ft_unsgint(unsigned int n, int *size);
void	ft_check(unsigned int n, int i, int *size);
void	ft_puthex(unsigned int n, char *base, int *size);

#endif
