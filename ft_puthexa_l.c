/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_l.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:33:14 by rmaanane          #+#    #+#             */
/*   Updated: 2024/12/10 23:38:59 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_l(unsigned long nb)
{
	int		count;
	char	*base_low;

	count = 0;
	base_low = "0123456789abcdef";
	if (nb >= 16)
		count += ft_puthexa_l(nb / 16);
	count += write(1, &base_low[nb % 16], 1);
	return (count);
}
