/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipykhtin <ipykhtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:50:00 by ivan              #+#    #+#             */
/*   Updated: 2025/11/25 17:56:54 by ipykhtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int printf_value(char format, void *type, int *size){
    switch (format)
    {
    case 'd':
        ft_printf_decimal(type, &*size);
        break;
    case 's':
        ft_printf_str(type, &*size);
        break;
    case 'c':
        ft_printf_char(type, &*size);
        break;
    case 'p':
        ft_printf_ptr(type, &*size);
        break;
    case 'i':
        ft_printf_int(type, &*size);
        break;
    case 'u':
        ft_printf_unsigned(type, &*size);
        break;
    case 'x':
        ft_printf_hex_lower(type, &*size);
        break;
    case 'X':
        ft_printf_hex_upper(type, &*size);
        break;
    default:
        break;
    }
    return 0;
}

int	ft_printf(const char *format, ...){
    va_list args;
    size_t i;
    int size;

    i = 0;
    size = 0;
    va_start(args, format);
    if(!format)
        return (-1);
    while(format[i]){
        if(format[i] == '%'){
            i++;
            if(format[i] == '\0')
                break ;
            if(format[i] == '%')
                size += write(1, "%", 1);
            else
                printf_value(format[i], va_arg(args, void *), &size);
        }
        else{
            size += write(1, &format[i], 1);
        }
        i++;
    }
    va_end(args);
    return size;
}