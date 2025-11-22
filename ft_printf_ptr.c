/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 22:30:09 by ivan              #+#    #+#             */
/*   Updated: 2025/11/22 22:30:18 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_printf_ptr(void *type){
    unsigned long ptr = (unsigned long)(type);
    write(1, "0x", 2);
    if(ptr == 0){
        write(1, "0", 1);
        return;
    }
    ft_putnbr_hex_lower(ptr);
}