/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipykhtin <ipykhtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 22:14:40 by ivan              #+#    #+#             */
/*   Updated: 2025/11/25 15:26:35 by ipykhtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_printf_unsigned(void *type, int *size){
    unsigned long num = (unsigned long)(type);
    char c;
    if(num < 0){
        write(1, "-", 1);
        num = -num;
    }
    if(num > 9){
        ft_printf_unsigned((void *)(num / 10), &*size);
    }
    c = (num % 10) + '0';
    (*size)++;
    write(1, &c, 1);
}