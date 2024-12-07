#include "ft_printf.h"

int ft_putstr(char *str)
{
    int i;

    i = 0;
    if (str == NULL)
    {
        write (1, "(null)", 6);
        return(i);
    }
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}
