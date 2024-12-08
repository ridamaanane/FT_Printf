/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:33:17 by rmaanane          #+#    #+#             */
/*   Updated: 2024/12/07 18:33:18 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_u(unsigned long nb)
{
	int		count;
	char	*base_upper;

	count = 0;
	base_upper = "0123456789ABCDEF";
	if (nb >= 16)
	{
		count += ft_puthexa_u(nb / 16);
		count += write(1, &base_upper[nb % 16], 1);
	}
	else
		count += write(1, &base_upper[nb % 16], 1);
	return (count);
}
