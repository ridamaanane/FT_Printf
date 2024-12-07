/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:33:23 by rmaanane          #+#    #+#             */
/*   Updated: 2024/12/07 18:33:25 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_adress(unsigned long nb)
{
    int count;
    char *base;

    count = 0;
    
    if (nb == 0)
        return (write (1, "(nil)", 5));
    base = "0123456789abcdef";
    if (nb >= 16)
    {
        count += ft_adress(nb / 16);
        count += write (1, &base[nb % 16], 1);
    }
    else
        count += write(1, &base[nb % 16], 1);
    return (count);
}
