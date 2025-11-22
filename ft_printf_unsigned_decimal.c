/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned_decimal.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 22:14:40 by ivan              #+#    #+#             */
/*   Updated: 2025/11/22 22:47:04 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr_unsigned(void *type){
    unsigned long num = (unsigned long)(type);
    char c;
    if(num < 0){
        write(1, "-", 1);
        num = -num;
    }
    if(num > 9){
        ft_putnbr_unsigned((void *)(num / 10));
    }
    c = (num % 10) + '0';
    write(1, &c, 1);
}