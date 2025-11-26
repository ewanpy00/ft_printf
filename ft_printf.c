#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

// ...existing code...
void printf_value(char format, va_list *args, t_count *count)
{
    if (format == 'd' || format == 'i')
        ft_printf_decimal(va_arg(*args, int), count);
    else if (format == 's')
        ft_printf_str(va_arg(*args, char *), count);
    else if (format == 'c')
        ft_printf_char(va_arg(*args, int), count);
    else if (format == 'p')
        ft_printf_ptr(va_arg(*args, void *), count);
    else if (format == 'u')
        ft_printf_unsigned(va_arg(*args, unsigned int), count);
    else if (format == 'x')
        ft_printf_hex_lower(va_arg(*args, unsigned int), count);
    else if (format == 'X')
        ft_printf_hex_upper(va_arg(*args, unsigned int), count);
}
// ...existing code...

static int handle_percent(const char *format, size_t *i, va_list *args, t_count *count)
{
    int check_d;
    (*i)++;
    if (format[*i] == '\0')
        return 1; /* stop: trailing '%' */
    if (format[*i] == '%')
    {
        check_d = write(1, "%", 1);
        if (check_d == -1)
            count->error = 1;
        else
            count->size += 1;
        (*i)++;
        return 0;
    }
    printf_value(format[*i], args, count);
    (*i)++;
    return 0;
}

// ...existing code...
static int process_next(const char *format, size_t *i, va_list *args, t_count *count)
{
    int check_d;
    if (format[*i] == '%')
    {
        if (handle_percent(format, i, args, count))
            return 1;
    }
    else
    {
        check_d = write(1, &format[*i], 1);
        if (check_d == -1)
        {
            count->error = 1;
            return 1;
        }
        count->size += 1;
        (*i)++;
    }
    if (count->error)
        return 1;
    return 0;
}
// ...existing code...

int ft_printf(const char *format, ...)
{
    va_list args;
    size_t i;
    t_count count;

    if (!format)
        return (-1);
    i = 0;
    count.size = 0;
    count.error = 0;
    va_start(args, format);
    while (format[i])
        if (process_next(format, &i, &args, &count))
            break;
    va_end(args);
    if (count.error == 1)
        return (-1);
    return count.size;
}