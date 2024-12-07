#include "ft_printf.h"

int ft_check(va_list args, const char format)
{
	int count;

	count = 0
	if (format == 'c')
        count += ft_putchar(va_arg(args , int));
	else if (format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (format == 'x')
		count += ft_puthexa_l(va_arg(args, unsigned int));
	else if (format == 'X')
		count += ft_puthexa_u(va_arg(args, unsigned int));
	else if (format == 'u')
		count += ft_unsigned(va_arg(args, unsigned int));
	else if (format == 'p')
	{
		count += write (1, "0x" ,2);
		count += ft_adress(va_arg(args, unsigned long));
	}
	else if (format == '%')
		count += ft_putchar(format);
	else
		count += ft_putchar(format);
	return (count);
}
int ft_printf(const char *format, ...)
{
    int i;
	int count;
    va_list args;
    va_start(args , *format);

	i = 0;
	count = 0;
    while (format[i] != '\0')
    {
        if (format[i] == '%' && format[i + 1] != '\0')
        {
            count += ft_check(args, format[i + 1]);
			i++;
        }
        else
            count += ft_putchar(format[i]);
        i++;
    }
    va_end(args);
    return (count);
}
