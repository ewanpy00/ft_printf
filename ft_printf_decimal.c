/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_decimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 22:14:11 by ivan              #+#    #+#             */
/*   Updated: 2025/11/22 22:14:12 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr(long num){
    char c;

    if(num > 9){
        ft_putnbr(num / 10);
    }
    c = (num % 10) + '0';
    write(1, &c, 1);
}

void ft_printf_decimal(void *type){
    long num = (long)(type);
    if(num < 0){
        write(1, "-", 1);
        num = -num;
    }
    ft_putnbr(num);
}