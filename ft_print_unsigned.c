/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:33:29 by rmaanane          #+#    #+#             */
/*   Updated: 2024/12/07 18:33:31 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb >= 10)
		count += ft_unsigned(nb / 10);
	count += ft_putchar((nb % 10) + '0');
	return (count);
}
