/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_decimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipykhtin <ipykhtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 22:14:11 by ivan              #+#    #+#             */
/*   Updated: 2025/11/25 18:07:35 by ipykhtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_printf_decimal(void *type, int *size){
    int num = (int)(type);
    if(num < 0){
        write(1, "-", 1);
        (*size)++;
        num = -num;
    }
    ft_putnbr(num, &*size);
}