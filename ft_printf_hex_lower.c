/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipykhtin <ipykhtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 22:18:51 by ivan              #+#    #+#             */
/*   Updated: 2025/11/26 13:35:31 by ipykhtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr_hex_lower(unsigned int num, t_count *count){
    char c;
    if(num >= 16){
        ft_putnbr_hex_lower(num / 16, count);
    }
    c = "0123456789abcdef"[num % 16];
    ft_putchar(c, count);
}

void ft_printf_hex_lower(unsigned int num, t_count *count){
    if(num == 0){
        ft_putchar('0', count);
        return;
    }
    ft_putnbr_hex_lower(num, count);
}