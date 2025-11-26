/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipykhtin <ipykhtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:38:18 by ipykhtin          #+#    #+#             */
/*   Updated: 2025/11/26 14:05:46 by ipykhtin         ###   ########.fr       */
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

void ft_putchar(char c, t_count *count)
{
    ssize_t w = write(1, &c, 1);
    if (w == -1)
        count->error = 1;
    else
        count->size += 1;
}

void ft_putnbr(long num, t_count *count){
    char c;

    if(num > 9){
        ft_putnbr(num / 10, count);
    }
    c = (num % 10) + '0';
    ft_putchar(c, count);
}

void ft_putstr(char *str, t_count *count){
    size_t i = 0;
    if(!str)
        return;
    while (str[i])
    {
        ft_putchar(str[i], count);
        i++;
    }
}

// void ft_putnbr_unsigned(unsigned long num, int *size){
//     char c;

//     if(num > 9){
//         ft_putnbr_unsigned(num / 10, &*size);
//     }
//     c = (num % 10) + '0';
//     write(1, &c, 1);
//     (*size)++;
// }

// int main(){
//     int size = 0;
//     ft_putnbr(12345, &size);
// }