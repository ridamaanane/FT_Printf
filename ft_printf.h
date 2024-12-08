/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:33:52 by rmaanane          #+#    #+#             */
/*   Updated: 2024/12/07 18:33:54 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_adress(unsigned long nb);
int	ft_ptrhandler(unsigned long nb);
int	ft_unsigned(unsigned int nb);
int	ft_puthexa_l(unsigned long nb);
int	ft_puthexa_u(unsigned long nb);
int	ft_putnbr(int n);
int	ft_check(va_list args, const char format);
int	ft_printf(const char *format, ...);

#endif
