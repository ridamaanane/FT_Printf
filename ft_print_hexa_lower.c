#include "ft_printf.h"

int ft_puthexa_l(unsigned long nb)
{
    int count;
    char *base_low;

    count = 0;
    base_low = "0123456789abcdef";
    if (nb >= 16)
    {
        count += ft_puthexa_l(nb / 16);
        count += write (1, &base_low[nb % 16], 1);
    }
    else
        count += write(1, &base_low[nb % 16], 1);
    return (count);
}
