#include "ft_printf.h"

int ft_unsigned(unsigned int nb)
{
    int count;

    count = 0;
    if (nb >= 10)
    {
        count += ft_unsigned(nb / 10);
        count += ft_putchar(nb % 10 + '0');
    }
    else
        count += ft_putchar(nb + '0');
    return (count);
}
