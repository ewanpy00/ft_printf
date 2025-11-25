/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipykhtin <ipykhtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 22:18:51 by ivan              #+#    #+#             */
/*   Updated: 2025/11/25 15:29:58 by ipykhtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr_hex_lower(unsigned long num, int *size){
    char c;
    if(num >= 16){
        ft_putnbr_hex_lower(num / 16, &*size);
    }
    c = "0123456789abcdef"[num % 16];
    write(1, &c, 1);
    (*size)++;
}

void ft_printf_hex_lower(void *type, int *size){
    unsigned long num = (unsigned long)(type);
    if(num == 0){
        write(1, "0", 1);
        (*size)++;
        return;
    }
    ft_putnbr_hex_lower(num, &*size);
}