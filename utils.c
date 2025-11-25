/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipykhtin <ipykhtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:38:18 by ipykhtin          #+#    #+#             */
/*   Updated: 2025/11/25 16:48:56 by ipykhtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_strlen(const char *s)
{
    size_t len;

    len = 0;
    while (s[len] != '\0')
        len++;
    return (len);
}

void ft_putnbr(long num, int *size){
    char c;

    if(num > 9){
        ft_putnbr(num / 10, &*size);
    }
    c = (num % 10) + '0';
    write(1, &c, 1);
    (*size)++;
}

// int main(){
//     int size = 0;
//     ft_putnbr(12345, &size);
// }