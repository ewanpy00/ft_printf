/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipykhtin <ipykhtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 22:19:17 by ivan              #+#    #+#             */
/*   Updated: 2025/11/26 13:45:28 by ipykhtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_printf_hex_upper(unsigned int num, t_count *count){
    char c;
    if(num == 0){
        ft_putchar('0', count);
        return;
    }
    else if(num >= 16){
        ft_printf_hex_upper(num / 16, count);
    }
    c = "0123456789ABCDEF"[num % 16];
    ft_putchar(c, count);
}