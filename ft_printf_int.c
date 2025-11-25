/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipykhtin <ipykhtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 21:50:41 by ivan              #+#    #+#             */
/*   Updated: 2025/11/25 18:05:22 by ipykhtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void ft_printf_int(void *type, int *size){
    int num = (int)(type);
    printf("%i\n", num);
    if(num < 0){
        write(1, "-", 1);
        (*size)++;
        num = -num;
    }
    ft_putnbr(num, &*size);
}

// int main(){
//     int size = 0;
//     ft_printf_int((void *)(-7), &size);
// }