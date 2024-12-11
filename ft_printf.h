/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 23:37:32 by rmaanane          #+#    #+#             */
/*   Updated: 2024/12/10 23:41:53 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_puthexa_l(unsigned long nb);
int	ft_puthexa_u(unsigned long nb);
int	ft_unsigned(unsigned int nb);
int	ft_ptrhandler(unsigned long nb);
int	ft_printf(const char *format, ...);

#endif
