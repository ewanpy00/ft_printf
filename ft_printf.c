/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:50:00 by ivan              #+#    #+#             */
/*   Updated: 2025/11/22 23:01:56 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int printf_value(char format, void *type){
    switch (format)
    {
    case 'd':
        ft_printf_decimal(type);
        break;
    case 's':
        ft_printf_str(type);
        break;
    case 'c':
        ft_printf_char(type);
        break;
    case 'p':
        ft_printf_ptr(type);
        break;
    case 'i':
        ft_printf_int(type);
        break;
    case 'u':
        ft_putnbr_unsigned(type);
        break;
    case '%':
        write(1, "%", 1);
        break;
    case 'x':
        ft_printf_hex_lower(type);
        break;
    case 'X':
        ft_printf_hex_upper(type);
        break;
    default:
        break;
    }
    return 0;
}

int	ft_printf(const char *format, ...){
    va_list args;
    size_t i;

    i = 0;
    va_start(args, format);
    // if(!format)
    //     return NULL;
    while(format[i]){
        if(format[i] == '%'){
            i++;
            printf_value(format[i], va_arg(args, void *));
        }
        else{
            write(1, &format[i], 1);
        }
        i++;
    }
    return 0;
}