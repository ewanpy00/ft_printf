/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 22:19:17 by ivan              #+#    #+#             */
/*   Updated: 2025/11/22 22:32:09 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr_hex_upper(unsigned long num){
    char c;
    if(num >= 16){
        ft_putnbr_hex_upper(num / 16);
    }
    c = "0123456789ABCDEF"[num % 16];
    write(1, &c, 1);
}

void ft_printf_hex_upper(void *type){
    unsigned long num = (unsigned long)(type);
    if(num == 0){
        write(1, "0", 1);
        return;
    }
    ft_putnbr_hex_upper(num);
}