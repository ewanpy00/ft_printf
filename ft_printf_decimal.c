/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_decimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipykhtin <ipykhtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 22:14:11 by ivan              #+#    #+#             */
/*   Updated: 2025/11/26 13:33:55 by ipykhtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_printf_decimal(int num, t_count *count){
    int check_d;
    if(num == -2147483648)
    {
        check_d = write(1, "-2147483648", 11);
        if(check_d == -1){
            count->error = 1;
        }
        (count->size) += 11;
        return ;
    }
    if(num < 0){
        ft_putchar('-', count);
        num = -num;
    }
    ft_putnbr(num, count);
}