#include "ft_printf.h"

int ft_puthexa_u(unsigned long nb)
{
    int count;
    char *base_upper;

    count = 0;
    base_upper = "0123456789ABCDEF";
    if (nb >= 16)
    {
        count += ft_puthexa_u(nb / 16);
        count += write (1, &base_upper[nb % 16], 1);
    }
    else
        count += write(1, &base_upper[nb % 16], 1);
    return (count);
}
