/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipykhtin <ipykhtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 22:30:09 by ivan              #+#    #+#             */
/*   Updated: 2025/11/26 13:04:14 by ipykhtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putptr(unsigned long num, t_count *count){
    char c;
    if(num >= 16){
        ft_putptr(num / 16, count);
    }
    c = "0123456789abcdef"[num % 16];
    ft_putchar(c, count);
}

void ft_printf_ptr(void *type, t_count *count){
    int check_d;
    unsigned long ptr = (unsigned long)(type);
    check_d = write(1, "0x", 2);
    if(check_d == -1){
        count->error = 1;
        return;
    }
    count->size += 2;
    if(ptr == 0){
        ft_putchar('0', count);
        return;
    }
    ft_putptr(ptr, count);
}